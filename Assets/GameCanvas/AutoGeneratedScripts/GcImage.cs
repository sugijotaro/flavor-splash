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
        internal const int __Length__ = 8;
        public static readonly GcImage Background = new GcImage("Background", 720, 1280);
        public static readonly GcImage DP = new GcImage("DP", 92, 191);
        public static readonly GcImage Frappucino = new GcImage("Frappucino", 393, 634);
        public static readonly GcImage FrappucinoSplashed = new GcImage("FrappucinoSplashed", 393, 634);
        public static readonly GcImage Furikake = new GcImage("Furikake", 150, 191);
        public static readonly GcImage Rice = new GcImage("Rice", 620, 537);
        public static readonly GcImage RiceSplashed = new GcImage("RiceSplashed", 620, 537);
        public static readonly GcImage SelectedIcon = new GcImage("SelectedIcon", 221, 147);
    }
}
