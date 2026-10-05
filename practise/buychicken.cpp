#include <iostream>
using namespace std;
int main()
{
    for(double i=0;i<=100;i++)
    {
        for(int male=0;male<=20;male++)
        {
            int female=100-i-male;
            double cost=i/3+male*5+female*3;
            if (cost==100.0&&i+male+female==100&&female>0)
            {
                cout<<"you can buy"<<i<<" "<<"litlle chicken"<<" "<<male<<"male"<<" "<<female<<"female"<<endl;
            }
            
        }
    }
    return 0;



}