#include <iostream>
#include <vector>
using namespace std;
int count;
void compare(int *arr,int n,int m,int up,int down=0)
{  
    if(down>up)
    {
        cout<<-1<<endl<<count<<endl;
    }
    else
    {
        count++;
        int mid=(up+down)/2;
        if(m==arr[mid])
            {
                cout<<mid<<endl;
                cout<<count;
            }
        else
            {
                if(m<=arr[mid])
                {
                    up=mid-1;
                    compare(arr,n,m,up,down);
                }
                else if(m>=arr[mid])
                {
                    down=mid+1;
                    compare(arr,n,m,up,down);
                }
            }
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
    compare(arr.data(),n,m,n-1,0);
    return 0;
}