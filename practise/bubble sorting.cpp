#include <iostream>
using namespace std;
int main ()
{
int arr[8]={23,42,263,56,43,634,3,5,};

int i=0,n=7;
for (int t=1;t<8;t++)
{
for(i=0;i<=n-t;i++)
 {
 if(arr[i]>arr[i+1])
   {
   int temp=arr[i+1];
   arr[i+1] =arr[i]  ;
   arr[i]=temp;
   }

  }
}
for(i=0;i<=n;i++)
{cout<<arr[i]<<" ";}
return 0;

}