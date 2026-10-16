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
for(int k=0;i+k<n&&j+k<n;k++)
    {
        place[(i+k)*n+(j+k)]=1;
    }
//左上方向
for(int k=0;i-k>0&&j-k>0;k++)
    {
        place[(i-k)*n+(j-k)]=1;
    }

    
}

int main()
{
    int n;
    int solution=0;
    cin>>n;
    int place[n][n]={0};
    int col[n];
    for(int i=0;i<n;i++)
    {
        col[i]=i;
    }
    do
    {
        for(int i=0;i<n;i++)
        {
            if(place[i][col[i]])
            {
                goto flag;
            }
            mark(&place[0][0],n,i,col[i]);
        }
        solution++;
        flag:
        memset(place, 0, sizeof(place));
    }
    while(next_permutation(col,col+n));
    cout<<solution<<endl;
    return 0;
}