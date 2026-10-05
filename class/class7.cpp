/*
 结构体
 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型,一般定义在main函数的外面。
 struct 结构体名 {结构体成员列表}
 **********创建变量的时候struct关键字可以省略，但是在一开始定义结构体的时候struct一定要写********
 struct student //创建名为student的结构体
{
    //成员列表如下
    //姓名
    string name；
    //年龄
    int age；
    //分数
    int score；
}
    创建结构体变量
    struct student s1
    利用“ . ”访问结构体变量中的属性或赋值
    具体结构体中的变量.访问的属性
    s1.name=....

    或者创建的同时赋值
    struct student s2={"李四",19,80};

    或者定义结构体的同时创建结构体变量
    struct student
{
    .......    
}s3;

结构体数组
将自定义的结构体放入数组中便于维护
struct 结构提名 数组名[元素个数] = {{}，{}，{}，...........  {}}；
struct student 
{
    string name;
    int age;
    int score;
}
int main ()
{
    struct student arr[3]=
    {
    {“张三”,18,100},
    .........
    {"李四",17,90}
    }
    //后续也可以更改
    arr[1].name=“王五”。
    或者arr[1]={"王五", 19, 99}
}
结构体指针
利用->可以通过结构体指针访问结构体属性
struct student 
{
  string name ;
  int age;
  int score;
}
struct student s1={"zhangsan" , 18 , 100}
struct student *p1 = &s1  //指针的数据格式也需要是student结构体类型,利用->可以访问结构体指针中的成员。
 cout <<p->name<<p->age<<p->score   

 结构体嵌套结构体：有先后顺序，先定义的结构体才能作为成员被后续的其他结构体使用
 struct student //先定义student
{
    string name;
}
 struct teacher
{
    string name;
    struct student;
};
teacher t1;//创建老师
student s1;//创建学生
t1.name="Ms ren "//给第一层的结构体赋值
t1.s1.name="xiaowang"//给第二层的结构体赋值

结构体做函数参数
值传递直接传struct 结构体名 结构体变量名
地址传递传struct 结构体名*p，使用结构体指针








*/

#include <iostream>
#include <string>
using namespace std;
struct drinks
    {
        string name;
        int price;
        int score ;
    };
void printdrinks(struct drinks *p1)
{
    for(int i=0;i<3;i++)
    {cout<<p1->name <<'\t'<<" "<<p1->price<<'\t'<<" "<<p1->score<<endl;
    p1++;}
}
int main()
{
    struct drinks d[3]={{"coke", 3,9},{"milk", 5,8},{"water",2,5}};
    printdrinks(d);

}
