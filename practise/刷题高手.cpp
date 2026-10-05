#include <iostream>
#include <vector>
using namespace std;
struct tongxue
{
    int xuehao;
    int shuatishu;
    vector<int> tihao;
    int score=0;
};
void sorting (struct tongxue * t1,int m)
{//从大到小的顺序排列
    for(int i=0;i<m-1;i++)
    {
        for(int k=0;k<m-i-1;k++)
        {
            if(t1[k].score<t1[k+1].score||
    (t1[k].score == t1[k+1].score && t1[k].xuehao > t1[k+1].xuehao))
            {
                struct tongxue temp=t1[k+1];
                t1[k+1]=t1[k];
                t1[k]=temp;
            }
        }
    }
}
void scoreculculate(struct tongxue * t1,int *target,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int l=0;l<t1[i].shuatishu;l++)
        {   
            for(int K=0;K<n;K++)
            {
                if(t1[i].tihao[l]==target[K])
                {
                    t1[i].score++;
                }
            }
        }
    }
}
void printt1(struct tongxue * t1,int k,int m)
{
    int k2=k;
    for(int i=0;i<k2;i++)
    {
        if(k2 < m && t1[i].score==t1[i+1].score)
        {
            k2++;
        }
    }
    for(int i=0;i<k2;i++)
    {
        cout<<t1[i].xuehao<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int target[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>target[i];
    }
    int m,k;
    cin>>m>>k;
    struct tongxue t1[m];
    for(int i=0;i<m;i++)
    {
        cin>>t1[i].xuehao>>t1[i].shuatishu;
        for(int k=0;k<t1[i].shuatishu;k++)
        {
           
                int x; cin >> x;
                t1[i].tihao.push_back(x);
            
        }
    }
    scoreculculate(t1,target,m,n);
    sorting(t1,m);
    printt1(t1,k,m);
    return 0;
    



}