#include <iostream>
using namespace std;
void ifright(char*n,char n9)
{
    char rightcode,code;
    int sum=0;
    for(int i=0;i<9;i++)
    {
        sum=sum+(n[i]-'0')*(i+1);//char 参与算术运算时会自动整型提升为 int：
    }
    rightcode=sum%11==10?'X':(sum%11+'0');
    code=n9=='X'?'X':(n9);
    if(rightcode==code)
    {
        cout<<"Right";
    }
    else{
        cout << n[0] << "-"
             << n[1] << n[2] << n[3] << "-"
             << n[4] << n[5] << n[6] << n[7] << n[8] << "-"<<rightcode;
    }


}
int main()
{
    char empty;
    char n9;
    char n[9];
    cin>>n[0]>>empty>>n[1]>>n[2]>>n[3]>>empty>>n[4]>>n[5]>>n[6]>>n[7]>>n[8]>>empty>>n9;
    ifright(n,n9);
    return 0;
}