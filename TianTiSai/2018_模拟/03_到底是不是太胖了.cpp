/**
 * @file 03_到底是不是太胖了.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 * 7-3 到底是不是太胖了 (10分)
据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。真实体重与标准体重误差在10%以内都是完美身材（即 | 真实体重 − 标准体重 | < 标准体重×10%）。已知市斤是公斤的两倍。现给定一群人的身高和实际体重，请你告诉他们是否太胖或太瘦了。

输入格式：
输入第一行给出一个正整数N（≤ 20）。随后N行，每行给出两个整数，分别是一个人的身高H（120 < H < 200；单位：厘米）和真实体重W（50 < W ≤ 300；单位：市斤），其间以空格分隔。

输出格式：
为每个人输出一行结论：如果是完美身材，输出You are wan mei!；如果太胖了，输出You are tai pang le!；否则输出You are tai shou le!。

输入样例：
3
169 136
150 81
178 155
输出样例：
You are wan mei!
You are tai shou le!
You are tai pang le!
 */

#include<stdio.h>
#include<math.h>
#define N 20
struct Man{
    float h;
    float w;
}peo[N];
int main(){
    int i,n;
    float standard;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f%f",&peo[i].h,&peo[i].w);
    }
    for(i=0;i<n;i++){
        standard=(peo[i].h-100)*0.9*2;
        if(fabs(peo[i].w-standard)<standard*0.1){
            printf("You are wan mei!\n");
        }
        else if(peo[i].w>standard){
            printf("You are tai pang le!\n");
        }
        else{
            printf("You are tai shou le!\n");
        }
    }
    return 0;
}