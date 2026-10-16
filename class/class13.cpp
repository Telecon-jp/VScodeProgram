//拷贝构造函数的调用时机：1.使用一个已经创建完毕的对象来初始化一个新对象 2.以值传递的方式给函数参数传递值 3.以值方式返回局部对象

#include <iostream>
using namespace std;
class person
{
    public:
    int age;
    public:
    person()
    {
        cout<<"person默认构造函数的调用"<<endl;
    }
    person(int a)
    {
        age=a;
        cout<<"person 有参构造函数的调用"<<endl;
    }
    person(const person &p)
    {
        age=p.age;
        cout<<"person拷贝构造函数的调用"<<endl;
    }
    ~person()
    {
        cout<<"person析构函数调用"<<endl;
    }
};
void test1()
{
    person p1(20);
    person p2(p1);
    cout<<"p2的年龄为"<<p2.age<<endl;
}
void test2()
{
    person p3;
    p3=value_P(p3);
}
person value_P(person p)//调用时，形参 p 并不是 实参 本身，而是 实参 的一份副本。这个副本的创建过程，就是调用拷贝构造函数。
// 为什么要理解这一点？
// 因为值传递会多一次拷贝构造 + 一次析构，如果对象很大（比如内部有动态数组、大量数据），开销会很大。所以 C++ 中通常推荐：
// 能用引用传递（const Person &p），就不要用值传递。
// 例如标准写法：
// void doWork(const Person &p)   既避免拷贝，又防止修改原对象
{
    person p7;
    return p7;//当函数以值方式返回一个局部对象时，会用这个局部对象去"拷贝构造"一个临时对象返回给调用者，这个过程中会调用拷贝构造函数。
}
int main()
{
    test1();
    test2();
    return 0;
}