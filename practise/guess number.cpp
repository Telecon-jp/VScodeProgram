#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct num 
{
    int number;
    int r_number;
    int r_position;
    int digit[4];
};
void printDigit(int n,int *p)
{
    for(int k=0;k<4;k++)
    {
        p[k]=n%10;
        n/=10;
    }
}
int main()
{
    int N;
    int answer;
    cin>>N;
    vector<num> n(N);
    for(int i=0;i<N;i++)
    {
        cin>>n[i].number>>n[i].r_number>>n[i].r_position;
    }
    for(int i=0;i<N;i++)
    {
        printDigit(n[i].number,n[i].digit);
    }
    struct num ran;
    int solution_count=0;
    for(int i=1000;i<10000&&solution_count!=2;i++)
    {
        ran.number=i;
        ran.r_number=0;
        printDigit(ran.number,ran.digit);
        int matchnum_count=0;
        for(int k=0;k<N;k++)
        {   
            ran.r_number=0;    ran.r_position=0;//初始化
                                                int count_ran[10]={0};
                                                int count_n[10]={0};
                                                for(int j=0;j<4;j++)
                                                {
                                                    count_ran[ran.digit[j]]++;
                                                    count_n[n[k].digit[j]]++;
                                                    if(ran.digit[j]==n[k].digit[j])//判断位置相同情况
                                                    {
                                                        ran.r_position++;
                                                    }
                                                }
                                                for(int m=0;m<10;m++)
                                                {
                                                    ran.r_number+=(count_ran[m]<=count_n[m]?count_ran[m]:count_n[m]);
                                                }
            if(ran.r_number!=n[k].r_number||ran.r_position!=n[k].r_position)
            {
                break;
            }
            else{
                matchnum_count++;
            }
        }
        if(matchnum_count==N)
        {
            answer=i;
            solution_count++;
        }
    }
    if(solution_count!=1)
    {
        cout<<"Not sure";
    }
    else{
        cout<<answer;
    }
}