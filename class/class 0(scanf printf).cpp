/*scanf 是 C 语言的标准输入函数，在 C++ 中也可以使用（需要包含 <cstdio> 或 <stdio.h>）。它的作用是从标准输入（键盘）按照指定格式读取数据。

一、基本语法
cpp
scanf("格式控制字符串", &变量1, &变量2, ...);
关键点：

第二个参数开始，必须传变量的地址（用 & 取地址符）

格式字符串中的 %d、%f 等要和变量的类型一一对应

这一点和 cout 不同，cout 不需要 &，但 scanf 必须要

二、常用格式说明符
格式符	对应类型	说明
%d	int	十进制整数
%ld	long	长整型
%lld	long long	长长整型
%f	float	单精度浮点数
%lf	double	双精度浮点数
%c	char	单个字符
%s	char[]	字符串（遇空格/换行停止）
%x	int	十六进制整数
%o	int	八进制整数
%%	无	输出一个 % 字符
?? 易错点：float 用 %f，double 用 %lf，不能混用。

三、基础用法示例
1. 读取一个整数
cpp
#include <cstdio>
int main()
{
    int a;
    scanf("%d", &a);       
    // 注意 & 
    printf("%d\n", a);
    return 0;
}
2. 读取多个数据
cpp
int a, b;
scanf("%d %d", &a, &b);    
// 输入: 3 5
// 空格、Tab、换行都可以作为分隔符
3. 读取浮点数
cpp
float f;
double d;
scanf("%f", &f);
scanf("%lf", &d);          
// double 必须用 %lf
4. 读取字符
cpp
char c;
scanf("%c", &c);          
// 注意：会读到空格、换行等
5. 读取字符串
cpp
char str[100];
scanf("%s", str);          
// 注意：数组名本身就是地址，不用加 &
// 输入 "hello world" 只会读到 "hello"（遇空格停止）
printf("格式说明符"，参数1，参数2.。。。。)
格式说明符形式：
%[标志][宽度][.精度][长度]转换字符
例如 %-10.3lf：
- 左对齐
10 宽度 10
.3 精度 3 位小数
l 长度（long）
f 转换字符（浮点）

 读入整段/数组
 函数	属于	作用
cin.get()	输入流	读字符/整行，不跳过空白
cin.getline()	输入流	读一整行
getline(cin, s)	普通函数	读一整行到 string
cin.get(char)	输入流	读一个字符
cin.get(数组, 长度)	输入流	读一行到字符数组
二、为什么需要 get？—— 因为 >> 会跳过空白
cin >> 有个"毛病"：自动跳过空格、Tab、换行。

cpp
char c;
cin >> c;    // 输入 " a" → 读到 'a'，前面的空格被跳过
如果你想读到空格、换行、Tab 本身，>> 做不到，这时就要用 get。

三、cin.get(ch)：读一个字符，不跳过任何东西
cpp
char ch;
cin.get(ch);   // 读到什么就是什么，包括 ' '、'\n'、'\t'、','
用途：

需要原样读入空格或换行时。

需要逐字符处理输入时（比如统计字符、判断格式）。

例子：读一行，统计空格数

cpp
char ch;
int space = 0;
while (cin.get(ch) && ch != '\n')
{
    if (ch == ' ') space++;
}
cout << "空格数: " << space << endl;
四、cin.get()：读一个字符，返回 int
cpp
int ch;
ch = cin.get();   // 返回读到的字符（int 形式），EOF 时返回 -1
和 cin.get(ch) 类似，但返回值形式，方便判断是否结束。

常用于循环读字符直到文件结束：

cpp
int ch;
while ((ch = cin.get()) != EOF)
{
    cout << (char)ch;
}
五、cin.get(数组, 长度)：读一行到字符数组
cpp
char buf[100];
cin.get(buf, 100);       // 读最多 99 个字符，遇到 '\n' 停止
最多读 长度-1 个字符，末尾自动加 '\0'。

遇到 '\n' 停止，但 '\n' 留在缓冲区里（这是和 getline 的区别）。

例子：

cpp
char buf[100];
cin.get(buf, 100);
cout << buf << endl;
输入：hello world
输出：hello world（空格被保留）

六、cin.getline(数组, 长度)：读一行，并丢掉换行符
cpp
char buf[100];
cin.getline(buf, 100);   // 读到 '\n' 停止，并把 '\n' 丢弃
和 cin.get(buf,100) 的区别：

get：换行符留在缓冲区

getline：换行符被读走丢弃

例子：

cpp
char buf[100];
cin.getline(buf, 100);
cout << buf << endl;
输入：hello world
输出：hello world

七、getline(cin, s)：读一行到 string（最常用）
cpp
#include <string>
string s;
getline(cin, s);   // 读一整行（含空格），换行符丢弃
这是读含空格字符串最方便的方式，推荐优先用。

例子：

cpp
string name;
getline(cin, name);   // 输入 "Tom Smith" → name = "Tom Smith"
cout << name << endl;
八、核心对比表
函数	读什么	跳过空白	换行符处理
cin >> ch	一个字符	? 跳过	跳过
cin >> s	一个单词	? 跳过	停在空白
cin.get(ch)	一个字符	? 不跳	能读到
cin.get(buf, n)	一行到数组	? 不跳	留在缓冲区
cin.getline(buf, n)	一行到数组	? 不跳	丢弃
getline(cin, s)	一行到 string	? 不跳	丢弃
九、最经典的坑：cin >> 和 getline 混用
cpp
int n;
string s;
cin >> n;          // 输入 5 回车
getline(cin, s);   // ? s 读到空字符串！
原因：cin >> n 读完后，换行符还留在缓冲区，getline 直接读到了这个空行。

解决：中间加一句吃掉换行

cpp
cin >> n;
cin.ignore();      // 吃掉残留的 '\n'
getline(cin, s);   // ? 正常
或用 cin.get()：

cpp
cin >> n;
cin.get();         // 吃掉 '\n'
getline(cin, s);
十、完整示例
cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. cin.get(ch) 读单个字符（含空格）
    char ch;
    cin.get(ch);
    cout << "读到的字符: [" << ch << "]" << endl;

    // 2. getline 读整行
    string line;
    getline(cin, line);
    cout << "整行: " << line << endl;

    // 3. cin.get(buf, n) 读一行到数组
    char buf[100];
    cin.get(buf, 100);
    cout << "数组: " << buf << endl;

    return 0;
}
十一、一句话总结
cin >>：跳过空白，读单词/数字，读不到空格和换行。

cin.get(ch)：读一个字符，什么都能读到（包括空格、换行）。

cin.getline(buf, n)：读一行到数组，换行丢弃。

getline(cin, s)：读一行到 string，最推荐。

cin.ignore()：吃掉残留的换行，常和 getline 搭配用。

什么时候用 get？

当你要读到空格、换行、Tab，或者要逐字符处理时，就用 get 系列；否则平时用 cin >> 就够了。

需要我针对 get / getline / cin.ignore() 的组合出几道练习题吗？






*/
