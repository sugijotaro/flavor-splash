#nullable enable
using GameCanvas;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;

public sealed class Game : GameBase
{
    int sec = 0;
    int countdown = 30 * 60;
    int splashedCount = 0;
    int currentFood = 0;
    int[] possibleValues = { 2, 3, 5 };
    int clearTime = 0;
    int status = 0;
    int difficulty = 0;
    string[] difficulties = { "NORMAL", "HARDCORE" };
    int missCount = 0;
    int selectedCondiments = 2;

    int[] foodsArray = new int[30];
    int progress = 0;

    int splashIntervalCount = 15;
    bool isSplashTapInterval = false;
    bool isSplashShakeInterval = false;

    bool preFrameTapped = false;

    bool isGameFinished = false;

    float shakeThreshold = 2.0f;
    float acceleration = 0.0f;

    bool isDebug = false;
    bool isShakeEnable = true;

    public override void InitGame()
    {
        gc.ChangeCanvasSize(720, 1280);
        gc.IsAccelerometerEnabled = true;
        gc.PlaySound(GcSound.TitleBGM, GcSoundTrack.BGM1, true);
    }

    public override void UpdateGame()
    {
        sec += 1;

        if (status == 0)
        {
            if (!preFrameTapped)
            {
                float x = gc.GetPointerX(1);
                float y = gc.GetPointerY(1);
                if (IsOnDifficultyToggle(y))
                {
                    ToggleDifficulty(x);
                    gc.PlaySE(GcSound.Click1);
                }
                else if (IsOnTimeAttack(y))
                {
                    StartRandomizedTimeAttack();
                }
                else if (IsOnTimeLimit(y))
                {
                    StartTimeLimit();
                }
            }
        }
        else if (status == 1)
        {
            if (isSplashTapInterval)
            {
                splashIntervalCount -= 1;
                if (splashIntervalCount == 0)
                {
                    splashIntervalCount = 15;
                    isSplashTapInterval = false;
                    if (progress < 30)
                    {
                        progress += 1;
                    }
                    if (isGameFinished || progress == 30)
                    {
                        isGameFinished = true;
                        clearTime = sec;
                        status = 3;
                    }
                }
            }
            if (!preFrameTapped)
            {
                CheckTap(gc.GetPointerX(1), gc.GetPointerY(1));
            }
            if (acceleration < 2.0f)
            {
                CheckShake();
            }
            else
            {
                acceleration = 0.0f;
            }
            if (gc.GetPointerDuration(0) >= 2)
            {
                BackToTitle();
            }
        }
        else if (status == 2)
        {
            countdown -= 1;
            if (countdown == 0)
            {
                isGameFinished = true;
                sec = 0;
                status = 4;
            }
            if (isSplashTapInterval)
            {
                splashIntervalCount -= 1;
                if (splashIntervalCount == 0)
                {
                    splashIntervalCount = 15;
                    isSplashTapInterval = false;
                    int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
                    currentFood = possibleValues[randomIndex];
                }
            }
            if (!preFrameTapped)
            {
                CheckTap(gc.GetPointerX(1), gc.GetPointerY(1));
            }
            if (acceleration < 2.0f)
            {
                CheckShake();
            }
            else
            {
                acceleration = 0.0f;
            }
            if (gc.GetPointerDuration(0) >= 2)
            {
                BackToTitle();
            }
        }
        else if (status == 3 && sec > clearTime + 180 || status == 4 && sec > 180)
        {
            if (gc.GetPointerFrameCount(0) == 1)
            {
                BackToTitle();
            }
        }

        if (gc.GetPointerFrameCount(0) >= 1)
        {
            preFrameTapped = true;
        }
        else
        {
            preFrameTapped = false;
        }
    }

    bool IsOnDifficultyToggle(float y)
    {
        return 890 < y && y < 950;
    }

    void ToggleDifficulty(float x)
    {
        if (100 < x && x < 630)
        {
            difficulty = 1 - difficulty;
        }
    }

    bool IsOnTimeAttack(float y)
    {
        return 1050 < y && y < 1100;
    }

    void StartRandomizedTimeAttack()
    {
        for (int i = 0; i < foodsArray.Length; i++)
        {
            int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
            foodsArray[i] = possibleValues[randomIndex];
        }
        sec = 0;
        gc.StopSound(GcSoundTrack.BGM1);
        gc.PlaySound(GcSound.GameBGM, GcSoundTrack.BGM2, true);
        status = 1;
    }

    bool IsOnTimeLimit(float y)
    {
        return 1150 < y && y < 1200;
    }

    void StartTimeLimit()
    {
        countdown = 30 * 60;
        splashedCount = 0;
        int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
        currentFood = possibleValues[randomIndex];
        gc.StopSound(GcSoundTrack.BGM1);
        gc.PlaySound(GcSound.GameBGM, GcSoundTrack.BGM2, true);
        status = 2;
    }

    void CheckTap(float x, float y)
    {
        if (1000 < y && y < 1188)
        {
            if (57 < x && x < 207)
            {
                selectedCondiments = 2;
            }
            else if (331 < x && x < 447)
            {
                selectedCondiments = 3;
            }
            else if (566 < x && x < 663)
            {
                selectedCondiments = 5;
            }
        }
        if (250 < y && y < 886)
        {
            if (!isSplashTapInterval)
            {
                if (progress < 30)
                {
                    if (!isShakeEnable)
                    {
                        FoodSplashed();
                    }
                }
            }
        }
    }
    void CheckShake()
    {
        float x = gc.AccelerationLastX;
        float y = gc.AccelerationLastY;
        float z = gc.AccelerationLastZ;

        acceleration = Mathf.Sqrt(x * x + y * y + z * z);

        if (acceleration > shakeThreshold)
        {

            if (!isSplashShakeInterval)
            {
                if (progress < 30)
                {
                    FoodSplashed();
                    isSplashShakeInterval = true;
                }
            }
        }
        else
        {
            isSplashShakeInterval = false;
        }
    }

    void FoodSplashed()

    {
        gc.PlaySE(GcSound.Shake);
        if (status == 1)
        {
            if (foodsArray[progress] == selectedCondiments)
            {
                isSplashTapInterval = true;
                foodsArray[progress] = foodsArray[progress] * 31;
            }
            else
            {
                if (difficulty == 1)
                {
                    splashIntervalCount = 1;
                    isSplashTapInterval = true;
                    isSplashShakeInterval = true;
                    isGameFinished = true;
                }
                missCount += 1;
            }
        }
        else if (status == 2)
        {
            if (currentFood == selectedCondiments)
            {
                isSplashTapInterval = true;
                currentFood = currentFood * 31;
                splashedCount += 1;
            }
            else
            {
                if (difficulty == 1)
                {
                    splashIntervalCount = 1;
                    isSplashTapInterval = true;
                    isSplashShakeInterval = true;
                    isGameFinished = true;
                    sec = 0;
                    status = 4;
                }
                missCount += 1;
            }
        }
    }

    void BackToTitle()
    {
        sec = 0;
        clearTime = 0;
        difficulty = 0;
        missCount = 0;
        selectedCondiments = 2;

        foodsArray = new int[30];
        progress = 0;

        splashIntervalCount = 15;
        isSplashTapInterval = false;
        isSplashShakeInterval = false;
        isGameFinished = false;

        preFrameTapped = false;

        gc.StopSound(GcSoundTrack.BGM2);
        gc.PlaySound(GcSound.TitleBGM, GcSoundTrack.BGM1, true);
        status = 0;
    }

    public override void DrawGame()
    {
        if (status == 0)
        {
            DrawBackground();
            DrawFlavorSplash();
            DrawDifficultyText();
            DrawDifficultyIcon(difficulty);
        }
        else if (status == 1)
        {
            DrawBackground();
            DrawSelectedCondiments(selectedCondiments);
            DrawProgress(progress);
            DrawTimeCountDown(sec);
            DrawDifficultyDuringGame(status, difficulty);
            DrawCondiments();
            if (progress < 30)
            {
                DrawFoods(foodsArray[progress]);
            }
            if (isDebug)
            {
                DrawAccelerationStatus();
            }
        }
        else if (status == 2)
        {
            DrawBackground();
            DrawSelectedCondiments(selectedCondiments);
            DrawSplashedCountDuringGame(splashedCount);
            DrawTimeCountDown(countdown);
            DrawDifficultyDuringGame(status, difficulty);
            DrawCondiments();
            DrawFoods(currentFood);
            if (isDebug)
            {
                DrawAccelerationStatus();
            }
        }
        else if (status == 3)
        {
            if (sec < clearTime + 60)
            {
                DrawFinish();
                gc.PlaySE(GcSound.Whistle);
            }
            else
            {
                DrawBackground();
                DrawDifficulty(difficulty);
                DrawResultText(difficulty, missCount);
                if (sec > clearTime + 120)
                {
                    DrawCenter(((float)clearTime / 60).ToString("0.00"));
                    DrawCenterSecondary("MISS:" + missCount.ToString() + "   SPLASHED:" + progress.ToString());
                }
                if (sec > clearTime + 180)
                {
                    DrawTapToReturn();
                }
            }
        }
        else if (status == 4)
        {
            if (sec < 60)
            {
                DrawFinish();
                gc.PlaySE(GcSound.Whistle);
            }
            else
            {
                DrawBackground();
                DrawDifficulty(difficulty);
                DrawResultText(difficulty, missCount);
                if (sec > 120)
                {
                    DrawCenter(splashedCount.ToString());
                    DrawCenterSecondary(missCount.ToString());
                }
                if (sec > 180)
                {
                    DrawTapToReturn();
                }
            }
        }
    }

    void DrawFlavorSplash()
    {
        gc.SetFontSize(120);
        gc.SetColor(0, 0, 0);
        gc.SetStringAnchor(GcAnchor.UpperCenter);
        gc.DrawString("FLAVOR", 360, 280);
        gc.DrawString("SPLASH", 360, 390);
    }

    void DrawDifficultyText()
    {
        gc.SetFontSize(60);
        gc.SetColor(256, 256, 256);
        gc.DrawString("NORMAL   HARDCORE", 360, 900);
        gc.DrawString("TIME ATTACK", 360, 1050);
        gc.DrawString("TIME LIMIT", 360, 1150);
    }

    void DrawDifficultyIcon(int difficulty)
    {
        if (difficulty == 0)
        {
            gc.DrawImage(GcImage.Array, 163, 820);
        }
        else if (difficulty == 1)
        {
            gc.DrawImage(GcImage.Array, 467, 820);
        }
    }

    void DrawSelectedCondiments(int selectedCondiments)
    {
        if (selectedCondiments == 2)
        {
            gc.DrawImage(GcImage.SelectedIcon, 23, 1093);
        }
        else if (selectedCondiments == 3)
        {
            gc.DrawImage(GcImage.SelectedIcon, 266, 1093);
        }
        else if (selectedCondiments == 5)
        {
            gc.DrawImage(GcImage.SelectedIcon, 505, 1093);
        }
    }
    void DrawProgress(int progress)
    {
        gc.SetFontSize(50);
        gc.SetColor(0, 0, 0);
        gc.SetStringAnchor(GcAnchor.UpperLeft);
        gc.DrawString("TASK:" + progress.ToString() + "/30", 20, 20);
    }
    void DrawSplashedCountDuringGame(int splashedCount)
    {
        gc.SetFontSize(50);
        gc.SetColor(0, 0, 0);
        gc.SetStringAnchor(GcAnchor.UpperLeft);
        gc.DrawString("SPLASHED:" + splashedCount.ToString(), 20, 20);
    }

    void DrawTimeCountDown(int countdown)
    {
        gc.DrawString("TIME:" + ((float)countdown / 60).ToString("0.00"), 450, 20);
    }

    void DrawDifficultyDuringGame(int status, int difficulty)
    {
        gc.SetStringAnchor(GcAnchor.UpperCenter);
        if (status == 1)
        {
            gc.SetStringAnchor(GcAnchor.UpperCenter);
            if (difficulty == 0)
            {
                gc.DrawString("TIME ATTACK  NORMAL", 360, 100);
            }
            else if (difficulty == 1)
            {
                gc.DrawString("TIME ATTACK  HARDCORE", 360, 100);
            }
        }
        else if (status == 2)
        {
            if (difficulty == 0)
            {
                gc.DrawString("TIME LIMIT  NORMAL", 360, 100);
            }
            else if (difficulty == 1)
            {
                gc.DrawString("TIME LIMIT  HARDCORE", 360, 100);
            }
        }
    }

    void DrawCondiments()
    {
        gc.DrawImage(GcImage.Condiments, 57, 1000);
    }
    void DrawFoods(int id)
    {
        switch (id)
        {
            case 2:
                gc.DrawImage(GcImage.Rice, 50, 267);
                break;
            case 2 * 31:
                gc.DrawImage(GcImage.RiceSplashed, 50, 267);
                break;
            case 3:
                gc.DrawImage(GcImage.Frappucino, 165, 256);
                break;
            case 3 * 31:
                gc.DrawImage(GcImage.FrappucinoSplashed, 165, 256);
                break;
            case 5:
                gc.DrawImage(GcImage.Watermelon, 59, 424);
                break;
            case 5 * 31:
                gc.DrawImage(GcImage.WatermelonSplashed, 59, 424);
                break;
            default:
                break;
        }
    }

    void DrawAccelerationStatus()
    {
        gc.DrawString("AcceX:" + gc.AccelerationLastX, 0, 100);
        gc.DrawString("AcceY:" + gc.AccelerationLastY, 0, 140);
        gc.DrawString("AcceZ:" + gc.AccelerationLastZ, 0, 180);
    }

    void DrawFinish()
    {
        gc.SetFontSize(120);
        gc.SetColor(0, 0, 0);
        gc.SetStringAnchor(GcAnchor.UpperLeft);
        gc.DrawString("FINISH", 185, 280);
    }

    void DrawBackground()
    {
        gc.DrawImage(GcImage.Background, 0, 0);
    }

    void DrawDifficulty(int difficulty)
    {
        gc.SetFontSize(50);
        gc.SetColor(0, 0, 0);
        gc.SetStringAnchor(GcAnchor.UpperCenter);
        gc.DrawString(difficulties[difficulty], 360, 30);
    }

    void DrawResultText(int difficulty, int missCount)
    {
        gc.SetFontSize(120);
        gc.SetColor(0, 0, 0);
        if (difficulty == 1 && missCount > 0)
        {
            gc.DrawString("FAILURE", 360, 100);
        }
        else
        {
            gc.DrawString("RESULT", 360, 100);
        }
    }

    void DrawCenter(string str)
    {
        gc.SetFontSize(clearTime);
        gc.SetColor(0, 0, 0);
        gc.SetStringAnchor(GcAnchor.UpperCenter);
        gc.SetFontSize(180);
        gc.DrawString(str, 360, 400);
    }

    void DrawCenterSecondary(string str)
    {
        gc.SetFontSize(60);
        gc.DrawString(str, 360, 610);
    }

    void DrawTapToReturn()
    {
        gc.SetFontSize(40);
        gc.SetColor(256, 256, 256);
        gc.SetStringAnchor(GcAnchor.UpperCenter);
        gc.DrawString("TAP TO RETURN TO TITLE SCREEN", 360, 1000);
    }

}
