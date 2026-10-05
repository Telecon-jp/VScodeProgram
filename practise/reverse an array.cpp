#include <iostream>
using  namespace std;
int main()
{
int i=0,E;
int arr[6]={1,2,3,4,5,6};
int e=(sizeof(arr)/sizeof(arr[0]))-1;
E=e;
while(i<=(E/2))
{int temp=arr[i];
arr[i]=arr[e];
arr[e]=temp;
i++;
e--;}
for(int n=0;n<=E;n++)
{
cout<<arr[n]<<" ";
};
 return 0;

    


} 