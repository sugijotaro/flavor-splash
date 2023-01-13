#nullable enable
using GameCanvas;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;

public sealed class Game : GameBase
{
    int sec = 0;
    int clearTime = 0;
    int status = 0;
    int selectedCondiments = 2;

    int[] foodsArray = new int[30];
    int progress = 0;

    int splashIntervalCount = 15;
    bool isSplashInterval = false;

    bool preFrameTapped = false;

    float shakeThreshold = 2.0f;

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
            if (gc.GetPointerFrameCount(0) == 1)
            {
                for (int i = 0; i < foodsArray.Length; i++)
                {
                    foodsArray[i] = UnityEngine.Random.Range(2, 4);
                    // foodsArray[i] = 2;
                }

                sec = 0;
                status = 1;
            }
        }
        else if (status == 1)
        {
            if (isSplashInterval)
            {
                splashIntervalCount -= 1;
                if (splashIntervalCount == 0)
                {
                    splashIntervalCount = 15;
                    isSplashInterval = false;
                    if (progress < 30)
                    {
                        progress += 1;
                    }
                    if (progress == 30)
                    {
                        clearTime = sec;
                        Debug.Log("clearTime:");
                        Debug.Log(clearTime);
                        status = 2;
                    }
                }
            }
            if (!preFrameTapped)
            {
                checkTap(gc.GetPointerX(1), gc.GetPointerY(1));
                checkShake();
            }
        }
        else if (status == 2)
        {
            if (sec > clearTime + 180)
            {
                if (gc.GetPointerFrameCount(0) == 1)
                {
                    sec = 0;
                    clearTime = 0;
                    selectedCondiments = 2;

                    foodsArray = new int[30];
                    progress = 0;

                    splashIntervalCount = 15;
                    isSplashInterval = false;

                    preFrameTapped = false;

                    status = 0;
                }
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
        if (120 < x && x < 260 && 1000 < y && y < 1188)
        {
            selectedCondiments = 2;
        }
        else if (510 < x && x < 610 && 1000 < y && y < 1188)
        {
            selectedCondiments = 3;
        }
        else if (250 < y && y < 886)
        {
            if (!isSplashInterval)
            {
                if (progress < 30)
                {
                    FoodSplashed();
                }
            }
        }
    }
    void checkShake()
    {
        float x = gc.AccelerationLastX;
        float y = gc.AccelerationLastY;
        float z = gc.AccelerationLastZ;

        float acceleration = Mathf.Sqrt(x * x + y * y + z * z);

        if (acceleration > shakeThreshold)
        {

            if (!isSplashInterval)
            {
                if (progress < 30)
                {
                    FoodSplashed();
                }
            }
        }
        Debug.Log(acceleration);
    }

    void FoodSplashed()
    {
        if (foodsArray[progress] == selectedCondiments)
        {
            isSplashInterval = true;
            foodsArray[progress] = foodsArray[progress] * 31;
        }
        // else
        // {
        //     foodsArray[progress] = foodsArray[progress] * 37;
        // }
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
            gc.SetStringAnchor(GcAnchor.UpperCenter);
            gc.DrawString("TAP TO START", 360, 1000);
        }
        else if (status == 1)
        {
            gc.DrawImage(GcImage.Background, 0, 0);
            if (selectedCondiments == 2)
            {
                gc.DrawImage(GcImage.SelectedIcon, 85, 1090);
            }
            else if (selectedCondiments == 3)
            {
                gc.DrawImage(GcImage.SelectedIcon, 447, 1090);
            }
            gc.SetFontSize(50);
            gc.SetColor(0, 0, 0);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("TASK:" + (progress).ToString() + "/30", 20, 20);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("TIME:" + ((float)sec / 60).ToString("0.00"), 490, 20);
            gc.DrawString("AcceX:" + gc.AccelerationLastX, 50, 0);
            gc.DrawString("AcceY:" + gc.AccelerationLastY, 50, 40);
            gc.DrawString("AcceZ:" + gc.AccelerationLastZ, 50, 80);
            gc.DrawImage(GcImage.Furikake, 120, 1000);
            gc.DrawImage(GcImage.DP, 509, 1000);
            if (progress < 30)
            {
                DrawFoods(foodsArray[progress]);
            }
        }
        else if (status == 2)
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
                gc.SetFontSize(120);
                gc.SetColor(0, 0, 0);
                gc.SetStringAnchor(GcAnchor.UpperLeft);
                gc.DrawString("RESULT", 185, 100);
                if (sec > clearTime + 120)
                {
                    gc.SetFontSize(180);
                    gc.SetColor(0, 0, 0);
                    gc.SetStringAnchor(GcAnchor.UpperLeft);
                    gc.DrawString(((float)clearTime / 60).ToString("0.00"), 155, 400);
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
            default:
                break;
        }
    }
}
