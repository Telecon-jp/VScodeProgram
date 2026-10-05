/*

函数
作用：讲一段经常使用的代码封装起来，减少代码量，每个模块实现特定的功能
函数的定义后五个步骤
1.返回值类型 2.函数名 3.参数列表 4.函数体 5.return 表达式
返回值类型 函数名 （参数1,参数2,....,参数n）
{
函数体语句
return表达式
}   注意，函数的定义不能写在main函数内

函数的调用
   函数名（参数）   例如：
   int add(int num1;int num2)
   {
   int sum=num1+num2;
   return sum;
   }
   int main()
   {
   cout<<add（a，b）<<endl;
   }
   输出为a+b的值.其中a与b为实参，而num1和num2是形式上的参数，简称形参。调用函数的时候，实参的值传递给形参
   如果函数不需要返回值，声明的时候写void
   void swi(int num1,int num2)
   {
    cout<<"before switch:"<<num1<<" "<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after switch:"<<num1<<" "<<num2<<endl;
   return;
   }
   main()
   {
   int a=10;int b=20
   swi(a,b);
   cout<<a<<b<<endl;
   return 0;
   }
   输出结果中形参发生交换，但是实参未发生交换

函数的常见形式
    1.无参无返
    void test1()
{
   cout<<"test1"<<endl;
   return; 
}
   int main()
   {
   test1;
   }
   2.有参无返  3.无参有返  4.有参有返

函数的声明：将自定义的函数写在main函数后面时，可以提前告诉编译器函数的存在，以便在main中调用
int max(num1,num2)-------------------函数声明
main()  {..............}
int max(num1,num2)-------------------函数定义
{.............}
 
函数的分文件编写
1。创建后缀名为.h的头文件
2.创建后缀名为.cpp的源文件
3.在头文件中写函数的声明
4.在源文件中写函数的定义吧


   













*/
#include <iostream>
#include "head1.h"
using namespace std;
int main()
{
   int a=10;
   int b=20;
   cout<<max1(a,b)<<endl;
   return 0;
}

