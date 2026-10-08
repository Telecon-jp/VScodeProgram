#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct music
{
    int num;
    int len;//乐曲长度
    vector<int> n;//频率组成的数组
    int c[16]={0};//目标歌曲对应频率在此出现的次数
    double x;//与目标歌曲的距离

};
void pinlvpanduan(struct music*m,int n)
{
    
    for(int i=0;i<n;i++)
    {
        
        for(int k=0;k<m[i].len;k++)
        {
            int position=m[i].n[k]/16;
            m[i].c[position]++;
        }
    }
}
void julipanduan(struct music*m,struct music*n0,int n)
{
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int k=0;k<16;k++)
        {
            x=x+((n0->c[k])-(m[i].c[k]))*((n0->c[k])-(m[i].c[k]));
        }
        m[i].x=sqrt(x);
    }
}
void sorting(struct music*m,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            if(m[k].x>m[k+1].x)
            {
                struct music temp=m[k+1];
                m[k+1]=m[k];
                m[k]=temp;

            }
        }
    }
}

int main()
{
    struct music n0;
    cin>>n0.len;
    n0.n.resize(n0.len);
    for(int i=0;i<n0.len;i++)
    {
        cin>>n0.n[i];
    }
    pinlvpanduan(&n0,1);
    
    int n,k;
    cin>>n>>k;
    vector<music> m(n);
    for(int i=0;i<n;i++)
    {
        cin>>m[i].len;
        m[i].n.resize(m[i].len);
        for(int k=0;k<m[i].len;k++)
        {
            cin>>m[i].n[k];
        }
        m[i].num=i;
    }
    pinlvpanduan(&m[0],n);
    julipanduan(&m[0],&n0,n);
    sorting(&m[0],n);
    for(int j=0;j<k;j++)
    {
        cout<<m[j].num<<" ";
    }
    return 0;



}