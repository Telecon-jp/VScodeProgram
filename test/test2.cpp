#include <iostream>
using namespace std;
int main()
{
    int a=10; 
    int b=20;
    const int * p;
    p=&a;
    p=&b;
    cout<<*p<<endl<<p;
return 0;   
}


