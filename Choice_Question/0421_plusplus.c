/**
 * @file 0421_plusplus.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-21
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
河北工程大学 信息与电气工程学院 计算机科学与技术系
学号：
202030701 	
姓名：
林嘉濠 	
性别：
男       课程选择   
选择题    选择成绩查询    编程题练习


单选题练习(C语言程序设计 )

请选择要练习的章号：
04

1、当a=1,b=3,c=5,d=4时，执行完下面一段程序后x的值是:
if(a<b)
  if(c<d) x=1;
  else
    if(a<c)
      if(b<d) x=2;
      else x=3;
    else x=6;
else x=3;

（A） 1
（B） 2
（C） 3
（D） 6
对错：√
2、设有:int a=1,b=2,c=3,d=4,m=2,n=2;执行(m=a>b)&&(n=c>d)后n的值为:
（A） 1
（B） 2
（C） 3
（D） 4
对错：√
3、为了避免在嵌套的条件语句if-else中产生二义性,C语言规定：else子句总是与(  )配对
（A） 缩排位置相同的if
（B） 其之后最近的if
（C） 其之前最近的没有else配对的if
（D） 同一行上的if
对错：√
4、有int x=3,y=4,z=5;则下面表达式中值为0的是:
（A） 'x'&&'y'
（B） x<=y 
（C） x||y+z&&y-z
（D） !((x<y)&&!z||1)
对错：√
5、以下不正确的if语句形式是:
（A） if (x>y&&x!=y);
（B） if (x==y) x+=y;
（C） if(x!=y) scanf("%d",&x) else scanf("%d",&y);
（D） if(x>y) {x++;y++;}
对错：×
6、能正确表示“当x的取值在[1,10]和[200,210]范围内为真”的C语言表达式为:
（A） (x>=1)&&(x<=10)&&(x>=200)&&(x<=210)
（B） (x>=1)||(x<=10)||(x>=200)||(x<=210)
（C） (x>=1)&&(x<=10)||(x>=200)&&(x<=210)
（D） (x>=1)||(x<=10)&&(x>=200)||(x<=210)
对错：√
7、执行以下语句:int a=5,b=6,w=1,x=2,y=3,z=4; (a=w>x)&&(b=y>z);  后b的值为:
（A） 0
（B） 1
（C） 5
（D） 6
对错：√
8、执行以下语句:int a=5,b=6,w=1,x=2,y=3,z=4;
(a=w>x)&&(b=y>z);
后a的值为:
（A） 0
（B） 1
（C） 2
（D） 3
对错：√
9、以下程序的运行结果是：
main()
{int a,b,d=241;
  a=d/100%9;
  b=(-1)&&(-1);
  printf("%d,%d",a,b);
}

（A） 6,1
（B） 2,1
（C） 6,0
（D） 2,0
对错：√
10、下列运算符中优先级最高的是:
（A） ==
（B） +
（C） &&
（D） !=
对错：√
11、判断char型变量ch是否为小写字母的正确表达式为:
（A） 'a'<=ch<='z'
（B） (ch>=a)&&(ch<=z)
（C） (ch>='a')||(ch<='z')
（D） (ch>='a')&&(ch<='z')
对错：√
12、以下程序的输出结果是：
main()
{int x=2,y=-1,z=2;
  if(x<y)
    if(y<0) z=0;
    else z+=1;
  printf("%d\n",z);
}

（A） 3
（B） 2
（C） 1
（D） 0
对错：√
13、以下程序的输出结果是:
main()
{int a=100,x=10,y=20,ok1=5,ok2=0;
  if(x<y)
    if(y!=10)
      if(!ok1)
        a=1;
      else
      if(ok2) a=10;
 a=-1;
printf("%d\n",a);
}

（A） 1
（B） 0
（C） -1
（D） 值不确定
对错：√
14、若希望当A的值为奇数时,表达式的值为“真”,A的值为偶数时,表达式的值为“假”。则以下不能满足要求的表达式是:
（A） A%2= =1
（B） !(A%2= =0)
（C） !(A%2)
（D） (A%2)
对错：√
15、有程序：main()
      {int a=5,b=1,c=0;
       if (a=b+c)  printf("***\n");
       else       printf("$$$\n");}
该程序:
（A） 有语法错误不能通过编译
（B） 可以通过编译,但不能通过连接
（C） 输出：***
（D） 输出：$$$
对错：√
16、以下关于运算符优先顺序的描述中正确的是:
（A） 关系运算符<算术运算符<赋值运算符<逻辑运算符(&& ||)
（B） 逻辑运算符(&& ||)<关系运算符<算术运算符<赋值运算符
（C） 赋值运算符<逻辑运算符(&& ||)<关系运算符<算术运算符
（D） 算术运算符<关系运算符<赋值运算符<逻辑运算符(&& ||)
对错：√
17、以下程序的运行结果是:
main()
{ int m=5;
  if(m++>5) printf("%d",--m);
  else printf("%d",m++);
}

（A） 4
（B） 5
（C） 6
（D） 7
对错：√
18、执行以下语句:int a,b,c;a=b=c=-1;++a||++b&&++c;后a,b,c的值分别为:
（A） -1,-1,-1
（B） 0,0,0
（C） 0,0,-1
（D） 0,-1,-1
对错：√
19、逻辑运算符两边运算对象的数据类型:
（A） 只能是0或1
（B） 可以是任何类型的数据
（C） 只能是0或非0正数
（D） 只能是整型或字符型数据
对错：×
20、若运行时给变量输入12，则以下程序的运行结果是：
main()
{int x,y;
  scanf("%d",&x);
  y=x>12?x+10:x-12;
  printf("%d\n",y);
}

（A） 0
（B） 22
（C） 12
（D） 10
对错：√
21、执行以下语句后,a,b,c的值分别为:
  int a,b,c;
  a=b=c=1;
  ++a||++b&&++c;
（A） 1,1,1
（B） 2,1,1
（C） 2,2,1
（D） 2,2,2

 */

#include<stdio.h>

int main()
{
    int a,b,c;
    a=b=c=1;
    ++a||++b&&++c;

    printf("%d, %d, %d\n", a, b, c);
    return 0;
}
/**
 * @brief 输出:2, 1, 1
 * 
 * 一个很奇怪的结果，优先级明明是 && > || ,自左到右结合性
 * Hailay 19:52:25
但是自左到右结合性

Hailay 19:52:55
所以执行++b&&就转到++a||

Hailay 19:53:05
++a是真，其他都不执行了


 */