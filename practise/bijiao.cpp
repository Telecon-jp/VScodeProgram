#include <iostream>
using namespace std;
int main()
{
    int together[20]={0};
    int n=0;
    while(cin>>together[n])
    {
        n++;
    }
    int arr1[20];
    int line1;
    int arr2[20];
    int line2;
    for(int i=0;i<20;i++)
    {
        if(together[i]==-1)
        {
            line1=i;
            break;
        }

    }
    for(int k=line1+1;k<20;k++)
    {
        if(together[k]==-1)
        {
            line2=k;
            break;
        }
    }
    cout<<line1<<endl<<line2-line1-1<<endl;
    int min_len=line1<line2-line1-1?line1:line2-line1-1;
    for(int k=0;k<20;k++)
    {
    if(together[0+k]!=together[line1+1+k])
        {
            cout<<together[0+k]-together[line1+1+k];
            break;
        }
        else if(k+1==min_len&&line1==line2-line1-1)
        {
            cout<<"0";
            break;
        }
        else if(k+1==min_len)
        {
            cout<<"Not Comparable";
            break;
        }
    }
    return 0;

}