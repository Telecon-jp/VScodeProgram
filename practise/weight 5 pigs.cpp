#include <iostream>
using namespace std;
int main()
{
int arr[5]={};
int i;
int num=1;
for(i=0;i<5;i++)
{cin>>arr[i];}
int max=arr[0];
for(i=1;i<5;i++)
{
if(arr[i]>max)
{max=arr[i];
num=i+1;}
}
cout<<"the weightest pig is "<<num<<"th"<<" and it weights "<<max<<" kilos"<<endl;



}