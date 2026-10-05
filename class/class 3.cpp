/*
循环语句
while循环语句
while(循环的条件)
{
循环执行的语句
}
rand()%100
生成一个0——99的随机数
通用公式：生成 [a, b] 闭区间随机数
int x = rand() % (b - a + 1) + a;
对于任意一个整数a，有
获取个位：a%10
获取十位：a/10%10
获取百位：a/100

for循环
作用：满足循环条件，执行循环语句
语法：for (起始表达式;条件表达式;末尾循环体){循环语句}

嵌套循环结构体

***continue语句
作用：在循环语句中，跳过本次循环中尚未被执行的语句，直接进行下一次循环
for(.....)
{
循环语句1
if（不想要继续执行循环语句2的情况）
{
continue；
}
循环语句2
}
注意区别continue和break的区别！！！
continue只是跳过一次或多次循环，并不结束循环

goto语句:直接执行标记的语句
语句1
语句2 goto FLAG
语句3
FLAG:
语句4
语句5 








*/

#include <iostream>
using namespace std;
int main ()
{
     for (int i=0;i<=100;i++)
     {
        int b,c,d;
        b=i%10;
        c=i/10%10;
        d=i%7;
        
        if(b==7||c==7||d==0)
        {cout<<"qiao"<<endl;}
        else {cout<<i<<endl;}
     }

return 0;




}