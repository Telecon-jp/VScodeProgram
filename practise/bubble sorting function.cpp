#include <iostream>
using namespace std;
void sorting (int *p1,int len)
{
   int *p2;
   int * origin_p1=p1;
   for(int i=0;i<len-1;i++)
   {
      p1=origin_p1;
      p2=p1+1;
      for(int k=0;k<len-1-i;k++)
      {
         if(*p1>*p2)
         {
            int temp=*p2;
            *p2=*p1;
            *p1=temp;
         }
         p1++;p2++;
      }
   }
    
}
int main ()
{
   int n;
   cin>>n;
   int arr[n]={0};
   for(int l=0;l<n;l++)
   {
      cin>>arr[l];
   }
   sorting (&arr[0],n);
   for(int l=0;l<n;l++)
   {
      cout<<arr[l]<<" ";
   }
   return 0;
   

}