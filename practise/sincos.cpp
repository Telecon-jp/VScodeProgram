#include <iostream>
#include <cmath>
using namespace std;
double jiecheng (int input)
{
    double output=1;
    for(int i=1;i<=input;i++)
    {
        output=output*i;
    }
    if(input==0)
    {
        output=1;
    }
    return output;
}
int main()
{
    double sinx=0;
    double cosx=0;
    double x,e;
    cin>>x>>e;
    long double pi = acosl(-1.0L);  
    x = fmodl(x, 2 * pi);
    int zhengfu=1;
    for(int k=1;true;k++)
    {
        if(k%2==0)
        {
            zhengfu=-1;
        }
        else{
            zhengfu=1;
        }
        long double fenzi=pow(x,(2*k-1));
        long double fenmu=jiecheng(2*k-1);
        long double yuansu=zhengfu*fenzi/fenmu;
        //if(fabs(sinx-sin(x))<=e)
        if(fabs(yuansu)<=e)
        {
            break;
        }
        sinx=sinx+yuansu;
    }

    for(int l=1;true;l++)
    {
        if(l%2==0)
        {
            zhengfu=-1;
        }
        else{
            zhengfu=1;
        }
        long double fenzi=pow(x,(2*l-2));
        long double fenmu=jiecheng(2*l-2);
        long double yuansu2=zhengfu*fenzi/fenmu;
        //if(fabs(cos(x)-cosx)<=e)
        if(fabs(yuansu2)<=e)
        {
            break;
        }
        cosx=cosx+yuansu2;
        
    }
    cout<<sinx<<endl<<cosx<<endl;
    return 0;
}