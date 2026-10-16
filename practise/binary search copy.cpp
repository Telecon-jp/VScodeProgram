#include <iostream>
#include <vector>
using namespace std;
int count;
void compare(int *arr,int n,int m,int up=0,int down=0)
{   count++;
    if(up==0){up=n-1;}
    if(m==arr[up+down/2])
    {
        cout<<up+down/2<<endl;
        cout<<count;
    }
    else if(m==arr[up])
    {
        cout<<up<<endl<<count<<endl;
    }
    else if(m==arr[down])
    {
        cout<<down<<endl<<count<<endl;
    }
    else if(m<arr[up+down/2]&&m>arr[down])
    {
        up=(down+up)/2;
        compare(arr,n,m,up,down);
    }
    else if(m>arr[up+down]&&m<arr[up])
    {
        down=(up+down)/2;
        compare(arr,n,m,up,down);
    }
    else if(up==down||up==down+1)
    {
        cout<<"-1"<<endl ;
    }
}
void sorting(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{   count=0;
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sorting(arr.data(),n);
    compare(arr.data(),n,m);
    return 0;
    
}