#include <iostream>
#include <string>
using namespace std;

int main()
{   string st1,st2;
    int len1,len2;
    getline(cin,st1);
    getline(cin,st2);
    len1=st1.size();
    len2=st2.size();
    int len_min=len1<=len2?len1:len2;
   int signal=0;
    for(int i=0;i<len_min;i++)
        {
            if(st1[i]==st2[i])
            {
                continue;
            }
            else{
                cout<<int(st1[i])-int(st2[i])<<endl;
                signal=1;
                break;
            }
        }
        if(signal==0)
        {
            cout<<"0";
        }
    
    
    return 0;
}