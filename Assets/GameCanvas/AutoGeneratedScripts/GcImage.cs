/*------------------------------------------------------------*/
// <summary>GameCanvas for Unity</summary>
// <author>Seibe TAKAHASHI</author>
// <remarks>
// (c) 2015-2022 Smart Device Programming.
// This software is released under the MIT License.
// http://opensource.org/licenses/mit-license.php
// </remarks>
/*------------------------------------------------------------*/
#nullable enable

namespace GameCanvas
{
    public readonly partial struct GcImage : System.IEquatable<GcImage>
    {
        internal const int __Length__ = 10;
        public static readonly GcImage Background = new GcImage("Background", 720, 1280);
        public static readonly GcImage BallRed = new GcImage("BallRed", 24, 24);
        public static readonly GcImage BallYellow = new GcImage("BallYellow", 24, 24);
        public static readonly GcImage BlueSky = new GcImage("BlueSky", 640, 480);
        public static readonly GcImage DP = new GcImage("DP", 348, 348);
        public static readonly GcImage Frappucino = new GcImage("Frappucino", 50, 50);
        public static readonly GcImage FrappucinoSplashed = new GcImage("FrappucinoSplashed", 50, 50);
        public static readonly GcImage Furikake = new GcImage("Furikake", 22, 28);
        public static readonly GcImage Rice = new GcImage("Rice", 30, 26);
        public static readonly GcImage RiceSplashed = new GcImage("RiceSplashed", 30, 26);
    }
}
