//三只小猪称体重
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
cout<<"please write down the weight og the first pig\n"<<endl;
cin>>a;
cout<<"please write down the weight of the second pig\n"<<endl;
cin>>b;
cout<<"please write down the weight of the third pig\n"<<endl;
cin>>c;
int m=max({a,b,c});
if(a==m){
cout<<"the first pig is the weightest pig"<<endl;
}
else if(b==m){cout<<"the secound pig is the weightest pig"<<endl;}
else if(c==m){cout<<"the third pig is the weightest pig"<<endl;}










}