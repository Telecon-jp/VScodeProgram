//在0--100以内寻找“水仙花数”
#include <iostream>
using namespace std;
int main()
{
int a=100;
do{
    int a1=a%10;
    int a2=a/10%10;
    int a3=a/100;
    if (a==(a1*a1*a1)+(a2*a2*a2)+(a3*a3*a3))
{
    cout<<a<<" is a shuixianhua number"<<endl;
}
a+=1;
}while(a<=999);

return 0;


}