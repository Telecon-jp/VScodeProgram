#include <iostream>    //预处理命令，将系统头文件包含进程序中
#include <string>
using namespace  std;  //用“std”表示预加载的功能/函数
int main ()
{                      //函数体开始
    cout <<"i am from ruc,"<<endl<<"my name is ljp"<<endl;
int a = 10;
cout <<"a="<<a<<endl;
short mun1=10;
cout<<"the size of num1 is"<<sizeof(mun1)<<endl;
int b=10.63;
cout<<b<<endl;       //这里的小数b的小数部分被舍去
char ch='a';
cout<<"ch="<<ch<<"ch's munber stands for "<<int(ch)<<endl;
float f1=3.1415f; 
return 0;             //输出0表示程序正常运行
}                       //函数体结束


//单行注释
/*多行注释  */
//main是程序的入口，每个程序必须有，有且仅有一个
//创建变量的语法：数据类型 变量名称=变量初始值
/*关键字（标识符）在定义变量的时候不能用关键字，标识符只能用字母数字下划线，第一的不能是数字，字母区分大小写
一。整形
1.短整型：short
2.整形：int
3.长整型：long
4.长长整形：long long
不同整形的取值范围不同
二.sizeof关键字
可以利用sizeof求出数据占用的内存大小
sizeof(便令名称)
三.实性（浮点数）
单精度float         双精度double(更精确的小数)
默认情况下，输出一个小数，显示六位有效数字
cout保留小数点后5位的示例代码

#include <iostream>

#include <iomanip>

using namespace std;

int main(){

    float a;

    cin>>a;

    cout<<fixed<<setprecision(5)<<a;

}
四.字符型
语法：char ch='a'
注意：字符型变量的赋值内容要用单引号引起来
且单引号内仅能有一个字母,每个字母在注册表中
都对应着一个数字，可以用int(字符变量)查看
对应的数字
五.转义字符
\a警报    \n换行符   打出两个\输出一个反斜杠
六.字符串类型
string sen="hello world"
七.布尔类型
true——真    false——假（在c++中除了0都是true）
bool flag=true
八.数据的输入
cin>>想要赋值的变量
九。运算符
算术运算符
比较运算符
逻辑运算符
%取模于：相除取余数
10%3=1*/
/*递增：前置递增
++a:先让让变量加一，在进行表达式的运算
后置递增
a++：先进行表达式的运算，再让变量加一
a=10   b=2
sum1=++a*b=11*2=22
sum2=a++*b=10*2=20
赋值运算符
 a=2   a+=5   输出结果：a=2+5=7
比较运算符
==相等于  ！=不相等  <  >  <=  >=  运行结果为1（true）
或者0（false）
逻辑运算符
！非    &&与    ||或
！a：如果a为真，则输出为假，反之亦然.！的作用是真假互换
int a=10
cout<<!!a<<endl;  输出结果为1（true）
a&b：如果a与b都为真，则输出结果为真
如果有一个或者都为假，则输出结果为假
a||b：a和b中只要有一者为真，则结果为真
只有a和b全为假时，输出结果为假  */