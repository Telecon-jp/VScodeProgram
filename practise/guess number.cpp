#include <iostream>
#include <time.h>
using namespace std;
int main()
{
srand(time(NULL));
int num =rand()%100+1;
int a;
do{cout<<"please guess a number ranges from 1-100."<<endl;
cin>>a;
cout<<"the number you guess is "<<a<<endl;   
if(a>num)
{
cout<<"too big"<<endl;
cout<<"try again."<<endl;
}
else if(a<num)
{
 cout<<"too small"<<endl;
 cout<<"try again."<<endl;
}
cin.clear();
}while(a!=num);
cout<<"correct!"<<endl;
return 0;

}