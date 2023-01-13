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

    public override void InitGame()
    {
        gc.ChangeCanvasSize(720, 1280);
        gc.IsAccelerometerEnabled = true;
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
                if (890 < y && y < 950)
                {
                    if (100 < x && x < 630)
                    {
                        difficulty = 1 - difficulty;
                    }
                }
                else if (1050 < y && y < 1100)
                {
                    for (int i = 0; i < foodsArray.Length; i++)
                    {
                        int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
                        foodsArray[i] = possibleValues[randomIndex];
                    }
                    sec = 0;
                    status = 1;
                }
                else if (1150 < y && y < 1200)
                {
                    countdown = 30 * 60;
                    splashedCount = 0;
                    int randomIndex = UnityEngine.Random.Range(0, possibleValues.Length);
                    currentFood = possibleValues[randomIndex];
                    status = 2;
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
                        Debug.Log("clearTime:");
                        Debug.Log(clearTime);
                        status = 3;
                    }
                }
            }
            if (!preFrameTapped)
            {
                checkTap(gc.GetPointerX(1), gc.GetPointerY(1));
            }
            if (acceleration < 2.0f)
            {
                checkShake();
            }
            else
            {
                acceleration = 0.0f;
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
                checkTap(gc.GetPointerX(1), gc.GetPointerY(1));
            }
            if (acceleration < 2.0f)
            {
                checkShake();
            }
            else
            {
                acceleration = 0.0f;
            }
        }
        else if (status == 3 && sec > clearTime + 180 || status == 4 && sec > 180)
        {
            if (gc.GetPointerFrameCount(0) == 1)
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

                status = 0;

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

    void checkTap(float x, float y)
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
        // if (250 < y && y < 886)
        // {
        //     if (!isSplashTapInterval)
        //     {
        //         if (progress < 30)
        //         {
        //             FoodSplashed();
        //         }
        //     }
        // }
    }
    void checkShake()
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
        Debug.Log(acceleration);
    }

    void FoodSplashed()
    {
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

    public override void DrawGame()
    {
        if (status == 0)
        {
            gc.DrawImage(GcImage.Background, 0, 0);
            gc.SetFontSize(120);
            gc.SetColor(0, 0, 0);
            gc.SetStringAnchor(GcAnchor.UpperCenter);
            gc.DrawString("FLAVOR", 360, 280);
            gc.DrawString("SPLASH", 360, 390);
            gc.SetFontSize(60);
            gc.SetColor(256, 256, 256);
            gc.DrawString("NORMAL   HARDCORE", 360, 900);
            gc.DrawString("TIME ATTACK", 360, 1050);
            gc.DrawString("TIME LIMIT", 360, 1150);

            if (difficulty == 0)
            {
                gc.DrawImage(GcImage.Array, 163, 820);
            }
            else if (difficulty == 1)
            {
                gc.DrawImage(GcImage.Array, 467, 820);
            }
        }
        else if (status == 1)
        {
            gc.DrawImage(GcImage.Background, 0, 0);
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
            gc.SetFontSize(50);
            gc.SetColor(0, 0, 0);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("TASK:" + progress.ToString() + "/30", 20, 20);
            gc.DrawString("TIME:" + ((float)sec / 60).ToString("0.00"), 450, 20);
            gc.SetStringAnchor(GcAnchor.UpperCenter);
            if (difficulty == 0)
            {
                gc.DrawString("TIME ATTACK  NORMAL", 360, 100);
            }
            else if (difficulty == 1)
            {
                gc.DrawString("TIME ATTACK  HARDCORE", 360, 100);
            }
            // gc.DrawString("AcceX:" + gc.AccelerationLastX, 0, 100);
            // gc.DrawString("AcceY:" + gc.AccelerationLastY, 0, 140);
            // gc.DrawString("AcceZ:" + gc.AccelerationLastZ, 0, 180);
            gc.DrawImage(GcImage.Condiments, 57, 1000);
            if (progress < 30)
            {
                DrawFoods(foodsArray[progress]);
            }
        }
        else if (status == 2)
        {
            gc.DrawImage(GcImage.Background, 0, 0);
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
            gc.SetFontSize(50);
            gc.SetColor(0, 0, 0);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("SPLASHED:" + splashedCount.ToString(), 20, 20);
            gc.DrawString("TIME:" + ((float)countdown / 60).ToString("0.00"), 450, 20);
            gc.SetStringAnchor(GcAnchor.UpperCenter);
            if (difficulty == 0)
            {
                gc.DrawString("TIME LIMIT  NORMAL", 360, 100);
            }
            else if (difficulty == 1)
            {
                gc.DrawString("TIME LIMIT  HARDCORE", 360, 100);
            }
            // gc.DrawString("AcceX:" + gc.AccelerationLastX, 0, 100);
            // gc.DrawString("AcceY:" + gc.AccelerationLastY, 0, 140);
            // gc.DrawString("AcceZ:" + gc.AccelerationLastZ, 0, 180);
            gc.DrawImage(GcImage.Condiments, 57, 1000);
            DrawFoods(currentFood);
        }
        else if (status == 3)
        {
            if (sec < clearTime + 60)
            {
                gc.SetFontSize(120);
                gc.SetColor(0, 0, 0);
                gc.SetStringAnchor(GcAnchor.UpperLeft);
                gc.DrawString("FINISH", 185, 280);
            }
            else
            {
                gc.DrawImage(GcImage.Background, 0, 0);
                gc.SetFontSize(50);
                gc.SetColor(0, 0, 0);
                gc.SetStringAnchor(GcAnchor.UpperCenter);
                gc.DrawString(difficulties[difficulty], 360, 30);
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

                if (sec > clearTime + 120)
                {
                    gc.SetFontSize(180);
                    gc.SetColor(0, 0, 0);
                    gc.SetStringAnchor(GcAnchor.UpperCenter);
                    gc.DrawString(((float)clearTime / 60).ToString("0.00"), 360, 400);
                    gc.SetFontSize(60);
                    gc.DrawString("MISS:" + missCount.ToString() + "   SPLASHED:" + progress.ToString(), 360, 610);
                }
                if (sec > clearTime + 180)
                {
                    gc.SetFontSize(40);
                    gc.SetColor(256, 256, 256);
                    gc.SetStringAnchor(GcAnchor.UpperCenter);
                    gc.DrawString("TAP TO RETURN TO TITLE SCREEN", 360, 1000);
                }
            }
        }
        else if (status == 4)
        {
            if (sec < 60)
            {
                gc.SetFontSize(120);
                gc.SetColor(0, 0, 0);
                gc.SetStringAnchor(GcAnchor.UpperLeft);
                gc.DrawString("FINISH", 185, 280);
            }
            else
            {
                gc.DrawImage(GcImage.Background, 0, 0);
                gc.SetFontSize(50);
                gc.SetColor(0, 0, 0);
                gc.SetStringAnchor(GcAnchor.UpperCenter);
                gc.DrawString(difficulties[difficulty], 360, 30);
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

                if (sec > 120)
                {
                    gc.SetFontSize(180);
                    gc.SetColor(0, 0, 0);
                    gc.SetStringAnchor(GcAnchor.UpperCenter);
                    gc.DrawString(splashedCount.ToString(), 360, 400);
                    gc.SetFontSize(60);
                    gc.DrawString("MISS:" + missCount.ToString(), 360, 610);
                }
                if (sec > 180)
                {
                    gc.SetFontSize(40);
                    gc.SetColor(256, 256, 256);
                    gc.SetStringAnchor(GcAnchor.UpperCenter);
                    gc.DrawString("TAP TO RETURN TO TITLE SCREEN", 360, 1000);
                }
            }
        }
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
}
