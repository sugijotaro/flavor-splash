#nullable enable
using GameCanvas;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;

public sealed class Game : GameBase
{
    int sec = 0;
    int status = 0;
    int selectedCondiments = 2;

    int[] foodsArray = new int[30];
    int progress = 0;

    int splashIntervalCount = 15;
    bool isSplashInterval = false;

    bool preFrameTapped = false;

    public override void InitGame()
    {
        gc.ChangeCanvasSize(720, 1280);
    }

    public override void UpdateGame()
    {
        sec = (int)gc.TimeSinceStartup;

        if (isSplashInterval)
        {
            splashIntervalCount -= 1;
            if (splashIntervalCount == 0)
            {
                splashIntervalCount = 15;
                isSplashInterval = false;
                progress += 1;
            }
        }

        if (status == 0)
        {
            if (gc.GetPointerFrameCount(0) == 1)
            {
                for (int i = 0; i < foodsArray.Length; i++)
                {
                    foodsArray[i] = UnityEngine.Random.Range(2, 4);
                }

                status = 1;
            }
        }
        else if (status == 1)
        {
            if (!preFrameTapped)
            {
                checkTap(gc.GetPointerX(1), gc.GetPointerY(1));
            }

            Debug.Log(splashIntervalCount);
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
        else if (250 < x && x < 886)
        {
            if (!isSplashInterval)
            {
                FoodSplashed();
            }
        }
    }

    void FoodSplashed()
    {
        if (foodsArray[progress] == selectedCondiments)
        {
            isSplashInterval = true;
            foodsArray[progress] = foodsArray[progress] * 31;
        }
        else
        {
            foodsArray[progress] = foodsArray[progress] * 37;
        }
    }

    public override void DrawGame()
    {
        if (status == 0)
        {
            gc.DrawImage(GcImage.Background, 0, 0);
            gc.SetFontSize(120);
            gc.SetColor(0, 0, 0);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("FLAVOR", 185, 280);
            gc.DrawString("SPLASH", 185, 390);
            gc.SetFontSize(60);
            gc.SetColor(256, 256, 256);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("TAP TO START", 180, 1000);
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
            gc.DrawImage(GcImage.Furikake, 120, 1000);
            gc.DrawImage(GcImage.DP, 509, 1000);
            DrawFoods(foodsArray[progress]);
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
