// 对象的初始化和清理
// 1.构造函数和析构函数
// 构造函数语法：类名()    {}
// 不写返回值也不写void，函数名和类名相同，构造函数可以有参数因此可以发生重载（）变量名相同 ，程序在调用对象的时候会自动调用构造函数，无需手动调用，而且只会调用一次

// 2.析构函数语法：~类名()    {}
// 没有返回值也不写void，函数名与类名相同前面写~，不可以有参数，因此不能发生重载，程序在对象销毁之前会自动调用析构函数，无需手动调用，而且只会调用一次
#include <iostream>
using namespace std;
// class person
// {
//     public:
//     person()
//     {
//         cout<<"构造函数的调用"<<endl;
//     }
//     ~person()
//     {
//         cout<<"person析构函数的调用";
//     }
// };
// void test1()//通过person类创建一个对象
// {
//     person p;//创建在函数中的对象在函数结束后即被释放
// }
// int main()
// {
//     person p2;//创建在main函数的对象会在所有程序实现之后再释放
//     test1();
// }

//构造函数的分类以及调用
//两种分类方式：1.按参数：有参构造和无参构造
//             2.按类型：普通构造和拷贝构造
//三种调用方式：1.括号法  2.显示法  3.隐式转换法

class person
{
    public:
    int age;
    public:
    person()//无参构造（默认构造）
    {
        cout<<"person的无参函数调用"<<endl;
    }
    person(int a)//有参构造
    {
        age=a;
        cout<<2<<"   "<<"age is"<<" "<<age<<endl;
    }
    person(const person &p)//拷贝构造的形式
    {
        age=p.age;
        cout<<age<<endl;
    }
    ~person()
    {
        cout<<3;
    }
};
void test1()
{
    //1.括号法
    // person p1;//默认构造的调用(不能用小括号，不然编译器会看做函数声明，不会认为在创建对象)
    // person p2(10);//有参构造函数的调用
    // person p3(p2);//拷贝函数的调用
    //2，显示法
    person p4;
    person p5=person(10);//有参构造
    person p6=person(p5);//拷贝构造
    person(10);//匿名对象  特点：当前行结束后系统会立即回收匿名对象，不能利用拷贝构造函数来初始化一个匿名对象，如person(p1)
    //3。隐式转换法
    person p7=10;//相当于person p7(10)或者person p7=person(10)


}
int main()
{
    test1();
}