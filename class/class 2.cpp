#include <iostream>
using namespace std;
int main()
{int a;
    cout<<"please assign a value for a\n"<<endl;
    cin>>a;
    char b=char(a);
    if(0<a&&a<255){
        cout<<a<<" stand for "<<b<<endl;
    }
    else {
        cout<<"a is out of range"<<endl;
    }


    

    
    return 0;






}
/*程序结构流程
  1.顺序结构  2.选择结构  3.循环结构
  选择结构
  1.if语句
  if（需要满足的条件）{满足条件时执行的语句}
  多行if语句
  if（条件）{
 语句 
  }
  else{
  语句
  }
  多条件if语句
  if（条件一）{语句一}
  else if（条件二）{语句2}
  ..........
  else if （条件n）{语句n}
  else {都不满足时的语句}
  
  三目运算符
  c=(a>b?a:b)    如果a大于b则输出a，反之则输出b,并将输出的值赋值给c
  三目运算符返回的是变量，可以继续赋值
  （a>b?a:b）=100  将较大的变量赋值为100

选择结构   switch语句
switch（表达式）
{
case 结果一：执行语句；break；
case 结果二：执行语句；break；
。。。。。
default：执行语句；break；
}
前面几个结果都没出现的话，执行default里的语句
  
  
  
  
  
  
  
  */