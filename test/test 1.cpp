#include <iostream>
using namespace std;
int main()
{
    int na,nb,nc,nd;
    int arr[8]={120,40,85,50,100,140,70,100};
    cin>>na>>nb>>nc>>nd;
    int i0=0;
    int w=0;
    for(int i=i0;i<8;i++)
    {
        if(na<=arr[i])
        {
            for(int k=0;k<8;k++)
            if(nb<=arr[k]&&k!=i)
            {
                for(int l=0;l<8;l++)
                {
                    if(nc<=arr[l]&&l!=k&&l!=i)
                    for(int p=0;p<8;p++)
                    {
                        if(nd<=arr[p]&&p!=l&&p!=i&&p!=k)
                        {
                            cout<<i+1<<" "<<k+1<<" "<<l+1<<" "<<p+1<<endl;
                            w++;
                        }
                    }
                }
            }
        }
        i0++;
    }
    if(w==0)
    {
        cout<<"-1";
    }
    return 0;
}