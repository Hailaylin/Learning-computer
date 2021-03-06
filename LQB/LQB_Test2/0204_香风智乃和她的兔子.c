/**
 * @file 0204_香风智乃和她的兔子.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 7-4 香风智乃和她的兔子 (25分)
香风智乃去公园欢乐地玩耍，她的兔子因为好吃的全部跑到了一座独木桥上。但是好景不长，因为兔子太多，独木桥摇摇欲坠。为了安全，香风智乃必须让她的兔子全部走下独木桥。独木桥的长度为L ， 兔子们只能呆在坐标为整数的地方。所有兔子的速度都为1，但一只兔子某一时刻来到了坐标为0 或者 L + 1的位置，就视为它已经离开了独木桥。

每一只兔子都有一个初始的面对方向，他们会匀速朝着这个方向行进，中途不会改变方向。但是，如果两只兔子面对面相遇，它们无法彼此通过对方，只能分别转身继续行走，转身不需要任何时间。

由于太急躁，香风智乃已经无法控制自己的兔子。甚至连每只兔子初始面对的方向都不知道。因此，香风智乃想要知道她的兔子最少需要多长时间可以离开独木桥。另外为了更好地做好准备，香风智乃还想知道最多需要多长时间她的兔子可以全部离开独木桥。

输入格式:
第一行一个整数L，表示独木桥的长度，桥上的坐标为1——L

第二行一个整数N，表示初始时留在桥上的兔子数目

第三行N个整数，分别表示初始每只兔子的坐标

输出格式:
只有一行，输出两个整数，以空格隔开，分别表示兔子全部离开独木桥的最短和最长时间

输入样例:
在这里给出一组输入。例如：

36
30
0 33 25 25 1 21 30 32 22 0 2 27 35 27 12 17 5 15 10 16 6 22 12 7 31 32 6 26 16 31 
输出样例:
在这里给出相应的输出。例如：

17 37
 */