#nullable enable
using GameCanvas;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;

/// <summary>
/// ゲームクラス。
/// 学生が編集すべきソースコードです。
/// </summary>
public sealed class Game : GameBase
{
    // 変数の宣言
    int sec = 0;
    int status = 0;

    /// <summary>
    /// 初期化処理
    /// </summary>
    public override void InitGame()
    {
        // キャンバスの大きさを設定します
        gc.ChangeCanvasSize(720, 1280);
    }

    /// <summary>
    /// 動きなどの更新処理
    /// </summary>
    public override void UpdateGame()
    {
        // 起動からの経過時間を取得します
        sec = (int)gc.TimeSinceStartup;

        if (status == 0) {
            if (gc.GetPointerFrameCount(0)==1) {
                status = 1;
            }
        }
    }

    /// <summary>
    /// 描画の処理
    /// </summary>
    public override void DrawGame()
    {
        // 画面を白で塗りつぶします
        gc.ClearScreen();

        if (status == 0) {
            gc.SetColor(0, 0, 0);
            gc.DrawImage(GcImage.Background, 0, 0);
            gc.SetFontSize(120);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.DrawString("FLAVOR", 185, 280);
            gc.DrawString("SPLASH", 185, 390);
            gc.SetFontSize(60);
            gc.SetStringAnchor(GcAnchor.UpperLeft);
            gc.SetColor(256, 256, 256);
            gc.DrawString("TAP TO START", 180, 1000);
        } else {

        }
    }
}
