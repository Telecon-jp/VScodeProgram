#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void mark(int *place,int n,int i,int j)//对对角线进行标记
{
// 右上方向
for(int k=0; i-k>=0 && j+k<n; k++)
    {
        place[(i-k)*n + (j+k)] = 1;
    }

// 左下方向
for(int k=0; i+k<n && j-k>=0; k++)
    {
        place[(i+k)*n + (j-k)] = 1;
    }
//右下方向
for(int k=0;i+k<=n&&j+k<=n;k++)
    {
        place[(i+k)*n+(j+k)]=1;
    }
//左上方向
for(int k=0;i-k>=0&&j-k>=0;k++)
    {
        place[(i-k)*n+(j-k)]=1;
    }
//同一列
for(int k=0;k<n;k++)
{
    place[k*n+j]=1;
}


    
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if
        }
    }


    cout<<solution<<endl;
    return 0;
}