#include <iostream>
#include <string>
using namespace std;
int len=0;
void funC(string &st1,string &st2)
{
    int position=0;
    int count=0;
    while(st1.find(st2,position)!=string::npos)
    {
        position=st1.find(st2,position)+len;
        count++;
    }
    cout<<count<<endl;
}
void funD(string &st1,string &st2)
{
    if(st1.find(st2)!=string::npos)
    {
        int position=st1.find(st2);
        string st1_D=st1;
        st1_D.erase(position,len);
        cout<<st1_D<<endl;
    }
    else{cout<<st1;}
}
void funI(string &st1,string &st2)
{
    int breakpoint=0;
    for(int i=0;i<len;i++)
    {
        if(st2[i]==' ')
        {
            breakpoint=i;
            break;
        }
    }
    string str2_1=st2.substr(0,breakpoint);
    string str2_2=st2.substr(breakpoint+1);
    if(st1.rfind(str2_1)!=string::npos)
    {
        int position=st1.rfind(str2_1);
        string st1_I=st1;
        st1_I.insert(position,str2_2);
        cout<<st1_I<<endl;
    }
    else{
        cout<<st1;
    }
}
void funR(string &st1,string &st2)
{
    int breakpoint=0;
    bool iffind=0;
    for(int i=0;i<len;i++)
    {
        if(st2[i]==' ')
        {
            breakpoint=i;
            break;
        }
    }
    string st2_1=st2.substr(0,breakpoint);
    int len1=st2_1.size();
    string st2_2=st2.substr(breakpoint+1);
    int len2=st2_2.size();
    int position=0;
    while(st1.find(st2_1,position)!=string::npos)
    {
        position=st1.find(st2_1,position);
        st1.erase(position,len1);
        st1.insert(position,st2_2);
        position+=len2;
        iffind=true;
    }
    cout<<st1<<endl;
}

void dowork(char order,string &st1,string &st2)
{
    if(order=='C')
    {
        funC(st1,st2);
    }
    else if(order=='D')
    {
        funD(st1,st2);
    }
    else if(order=='I')
    {
        funI(st1,st2);
    }
    else if(order=='R')
    {
        funR(st1,st2);
    }
    else{
        cout<<"error"<<endl;
    }
}
int main()
{
    string st1,origin_string;
    getline(cin,st1);
    getline(cin,origin_string);
    int st2_len=origin_string.size()-2;
    char order=origin_string[0];
    string st2=origin_string.substr(2,st2_len);
    len=st2_len;
    dowork(order,st1,st2);

    return 0;
}