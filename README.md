[<img alt="Flavor Splash" align="right" src="Assets/GameCanvas/Icons/icon_android_full.png"/>](https://github.com/sfc-sdp/GameCanvas-Unity/releases/latest)
# Flavor Splash
[![GameCanvas API v6.1.2](https://img.shields.io/badge/GameCanvas%20API-v6.1.2-yellow.svg)](https://sfc-sdp.github.io/GameCanvas-Unity/)

Flavor Splashは、次から次へと流れてくる`ご飯`、`フラペチーノ`、`スイカ`に、それぞれ`ふりかけ`、`ダークパウダー`、`塩`を振りかけるスマートフォン向けゲームです。

## 遊び方
### 1. タイトル画面で`難易度`と`ゲームモード`を選ぼう！
<img src="https://user-images.githubusercontent.com/52352924/213075843-97ca64de-5d3d-4ec2-aad4-02fe6f58cf77.jpg" width="320px">

#### 難易度
**NORMAL** :  基本のゲームモードです  
**HARDCORE** :  操作を一度でも間違えるとその時点でゲームオーバーとなる、ハードコアなモードです

#### ゲームモード
**TIME ATTACK** : 30個のタスクを何秒で終わらせられるかを競うモードです  
**TIME LIMIT** : 30秒間に何個のタスクを終わらせられるかを競うモードです

### 2. 次々と流れてくる食べ物に調味料を振りかけよう！

`ご飯`、`フラペチーノ`、`スイカ`がランダムに流れてきます。

![](https://user-images.githubusercontent.com/52352924/213354810-e0acffe4-5108-4293-9ca9-8b6d3e38d020.png)

流れてきた食べのもに適切な調味料を選択します  
`ご飯`には`ふりかけ`を、`フラペチーノ`には`ダークパウダー`を、`スイカ`には`塩`を選択します

![](https://user-images.githubusercontent.com/52352924/213354824-8f465f3f-d187-4cc3-b3ba-a8809251c586.png)

スマートフォン自体を振ることによって、調味料を振りかけることができます  
HARDCOREモードでは、調味料を違う食品に振りかけたり、調味料を振りかけすぎると、その時点で失格となります

### 3. 結果発表！

ゲーム終了条件を満たすと、結果発表画面に移ります。

ゲーム終了条件は以下の通りです。
```
TIME ATTACK: 30個のタスクが終わった
TIME LIMIT: ゲーム開始から30秒が経過した
```
HARDCOREモードの場合は、以上の条件に加え、一度でもミスをしたら結果発表画面に移ります。

## 工夫した点
スマートフォンならではの操作方法を取り入れたいと考え、**「振る」というアクション**を含んだゲームを作成しました。

「スマートフォンを振る」という操作方法は、タップする操作方法に比べ、自分の手を動かす必要があります。  
また、スマートフォンを振ると、インタラクティブに画面内に変化が起こります。  
そのため、**プレイヤーをよりゲームに没入させることができる**と考えました。

さらに、スマートデバイスプログラミングが全体的にレトロ雰囲気だったため、背景やイラスト、BGMもそのテイストに合わせたものを心がけました。  
塩やダークパウダーなどは写真を低解像度化してから整形し、作成しました。
特に、フラペチーノの画像は自ら作りました。

## 備考
<details>
<summary>開発環境</summary>

Unity 2020.3.40f1  
GameCanvas 6.1.2
</details>
<details>
<summary>使用した素材</summary>

- BGM: [魔王魂](https://maou.audio/)様
- ご飯の画像: [ヌー@ドット絵素材置き場](http://damagedgold.wp.xdomain.jp/)様
- 効果音: [ポケットサウンド](https://pocket-se.info/)様
- 効果音: [On-Jin ～音人～](https://on-jin.com/)様
</details>
