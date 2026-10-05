#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int k=n-i;k>0;k--)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<char(64+j);
    }
    for(int m=63+i;m>=65;m--)
    {
        cout<<char(m);
    }
    cout<<endl;  
}
return 0;   
}
