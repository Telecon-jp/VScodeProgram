#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int DigitCheck(int n)
{
    for(int i=1;true;i++)
    {
        if(n/10!=0)
        {
            n=n/10;
        }
        else
        {
            return i;
            break;
        }
    }
}
void printDigit(int n,int digit)
{
    vector<int> D(digit);
    for(int k=0;k<digit;k++)
    {
        D[k]=(n/int(pow(10,k)))%10;
        cout<<D[k]<<",";
    }
    cout<<digit;
}
int main()
{
    int n;
    cin>>n;
    int digit=DigitCheck(n);
    printDigit(n,digit);
    return 0;
    
}