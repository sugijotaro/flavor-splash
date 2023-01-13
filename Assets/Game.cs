#nullable enable
using GameCanvas;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;

public sealed class Game : GameBase
{
    int sec = 0;
    int status = 0;
    int selectedCondiments = -1;

    public override void InitGame()
    {
        gc.ChangeCanvasSize(720, 1280);
        selectedCondiments = 0;
    }

    public override void UpdateGame()
    {
        // 起動からの経過時間を取得します
        sec = (int)gc.TimeSinceStartup;

        if (status == 0)
        {
            if (gc.GetPointerFrameCount(0) == 1)
            {
                status = 1;
            }
        }
        checkTap(gc.GetPointerX(1), gc.GetPointerY(1));
    }
    void checkTap(float x, float y)
    {
        if (120 < x && x < 260 && 1000 < y && y < 1188)
        {
            selectedCondiments = 0;
            Debug.Log(selectedCondiments);
        }
        else if (510 < x && x < 610 && 1000 < y && y < 1188)
        {
            selectedCondiments = 1;
            Debug.Log(selectedCondiments);
        }
    }

    public override void DrawGame()
    {
        // 画面を白で塗りつぶします
        gc.ClearScreen();

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
            gc.DrawImage(GcImage.Furikake, 120, 1000);
            gc.DrawImage(GcImage.DP, 500, 1000);
        }
    }
}
