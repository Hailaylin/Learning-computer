/*

 	       C语言程序设计	 
题号：L0712        题目:选择法排序        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入6个整数，用选择法对它们从小到大排序，然后输出排序后的结果。
要求：输入、输出、排序都使用函数完成，例如输入函数 void input(int a[], int n)。输出时各元素用空格间隔（即输出每一个元素的数值后再输出一个空格）。
#define N 6
void input(int a[], int n);
void output(int a[],int n);
void sort(int a[],int n);

例：
（1）输入：6 5 4 3 2 1  输出：1 2 3 4 5 6
（2）输入：4 5 6 4 5 6  输出：4 4 5 5 6 6 
（3）输入：1 2 3 4 5 6  输出：1 2 3 4 5 6
（4）输入：3 2 1 4 5 6  输出：1 2 3 4 5 6
*/

#include<stdio.h>
#define N 6
//输入
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)                //for(int i=0;i<n;i++);提交编译不通过，for不能初始化参数？？？
    {
        scanf("%d",&a[i]);
    }
}
//输出a[]的n个数
void outout(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

//选择排序，输入要排序的数组名a[]和元素个数n
void selection_sort(int a[],int n)      //后面还可以加一个参数，是从大到小输出还是从小到大输出
{
    void swap_ab(int *a,int *b);
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
             min=j;   
            }
        }
        if(min!=i)
            swap_ab(&a[min],&a[i]);
    }
}
//用指针交换值
void swap_ab(int * a,int * b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int num[N];
    input(num,N);
    selection_sort(num,N);
    outout(num,N);
    return 0;
}