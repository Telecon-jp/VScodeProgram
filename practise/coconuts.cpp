#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main ()
{
    long long n;
    while(cin>>n&&n!=0)
    {
        int signal=0;
        long long i=n;
        long long N=n;
        int m_max;
        n=pow(m_max,m_max);
        for(long long m =9;m>1;m--)
        {   n=N;
            for(long long k=0;k<m;k++)//产看是否符合题目中的前m天的要求,有一天不符合要求就跳出循环
            {
                if((n-1)%m==0)
                {
                    signal=1;
                    n=n-1-(n-1)/m;
                }
                else
                {
                    goto flag;
                }
            } 
            if(n%m==0)  //查看是否符合第m+1天的要求
            {
                cout<<m<<endl;
                signal=2;
                break;
            }
            flag:;
        }
        if(signal!=2)
        {
            cout<<"no solution"<<endl;
        }
    }
}