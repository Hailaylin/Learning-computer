/**
 * @file 0310_尝试printf格式输出.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-18
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai 
 */

//*要单独写注释才有这种颜色……

#include<stdio.h>
#include<math.h>
int main()
{
    char ch = 0101;
    char ch1 = '\x0f';
    char ch2 = '123';
    printf("%c,%c,%c\n", ch, ch1, ch2);
    return 0;
}