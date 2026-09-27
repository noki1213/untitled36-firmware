/*                                      36 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────╮       ╭────────────────────╮
  │  0   1   2   3   4 │       │  5   6   7   8   9 │
  │ 10  11  12  13  14 │       │ 15  16  17  18  19 │
  │ 20  21  22  23  24 │       │ 25  26  27  28  29 │
  ╰──────────╮30 31 32  │       │ 33 34 35╭──────────╯
             ╰──────────╯       ╰──────────╯

 ╭─────────────────────╮        ╭─────────────────────╮
 │ LT4 LT3 LT2 LT1 LT0  │        │ RT0 RT1 RT2 RT3 RT4  │
 │ LM4 LM3 LM2 LM1 LM0  │        │ RM0 RM1 RM2 RM3 RM4  │
 │ LB4 LB3 LB2 LB1 LB0  │        │ RB0 RB1 RB2 RB3 RB4  │
 │            LH2 LH1 LH0│      │RH0 RH1 RH2            │
 ╰───────────────────────╯      ╰───────────────────────╯

 T : Top row
 M : Middle row
 B : Bottom row
 H : Hand（親指キー）
 数字4=小指列側、数字0=人差し指の内側列（中央寄り）

*/

#pragma once

#define LT4  0  // left-top row: pinky
#define LT3  1  //               ring
#define LT2  2  //               middle
#define LT1  3  //               index
#define LT0  4  //               inner（人差し指の内側）

#define RT0  5  // right-top row: inner
#define RT1  6  //                index
#define RT2  7  //                middle
#define RT3  8  //                ring
#define RT4  9  //                pinky

#define LM4 10  // left-middle row
#define LM3 11
#define LM2 12
#define LM1 13
#define LM0 14

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB4 20  // left-bottom row
#define LB3 21
#define LB2 22
#define LB1 23
#define LB0 24

#define RB0 25  // right-bottom row
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

#define LH2 30  // left thumb keys（外側→内側）
#define LH1 31
#define LH0 32

#define RH0 33  // right thumb keys（内側→外側）
#define RH1 34
#define RH2 35
