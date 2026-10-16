#include <iostream>
using namespace std;
void yuefen(int n,int m)
{
    int signal=0;
    long min=n>m?m:n;
    for(int i=2;i<min;i++)
    {
        if(m==1||n==1)
        {
            break;
        }
        else if(n%i==0&&m%i==0)
        {
            n=n/i;
            m=m/i;
            signal=1;//成功约分
            break;
        }
    }
    if(signal==1)
    {
        yuefen(n,m);
    }
    else
    {
        cout<<n<<"/"<<m;
    }
}
int main()
{
    long n;//分子
    long m;//分母
    char dash;
    cin>>n>>dash>>m;
    if(m==1||n==1)
    {
        cout<<n<<"/"<<m;
    }
    else
    {
        yuefen(n,m);
    }
    return 0;


}