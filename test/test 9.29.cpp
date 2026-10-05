#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double x,e;
    double jie,jie2;
    double fang,fang2;
    cin>>x>>e;
    int zhengfu=1,zhengfu2 = 1;
    double sinx=0;
    double cosx=0;
    for(int i=1;true;i++)
    {
        jie=1.0;
        fang=1.0;
        for(int k=2*i-1;k>0;k--)
        {
            jie=jie*k;
            fang=fang*x;
        }
        fang2=fang/x;
        jie2=jie/(2*i-1);
        if(i%2==1||i==1)
        {
             zhengfu =1;
        }
        else 
        {
            zhengfu=-1;
        }

        sinx=sinx+zhengfu*fang/jie;
        cosx=cosx+zhengfu*fang2/jie2;
        if(fabs(fang/jie)<e&&fabs(fang2/jie2)<e)
        {
            cout<<sinx<<endl<<cosx<<endl;
            break;
        }
        
    }
    

}