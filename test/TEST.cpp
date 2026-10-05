#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct hero
{
    string name;
    int age;
    bool gender;
    string Gender;
};
void sorting(struct hero shu[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        
        for(int k=0;k<len-1-i;k++)
        {
            if(shu[k].age<shu[k+1].age)
            {
                struct hero temp=shu[k+1];
                shu[k+1]=shu[k];
                shu[k]=temp;
            }
        }
    }
}
void Gender(struct hero shu[],int len)
{
    for(int l=0;l<len;l++)
    {
        if(shu[l].gender==0)
        {
            shu[l].Gender="ÄÐÐÔ";
        }
        else 
        {
            shu[l].Gender="Å®ÐÔ";
        }
    }
}
void printH(struct hero shu[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<shu[i].name<<'\t'<<shu[i].age<<'\t'<<shu[i].Gender<<endl;
    }
}
int main()
{
    struct hero shu[5]=
    {
    {"liubei",23,1},
    {"guanyu",22,1},
    {"zhangfei",20,1},
    {"zhaoyun",21,1},
    {"diaochan", 19,0}
    };
    int len=sizeof(shu)/sizeof(shu[0]);
    Gender(shu,len);
    sorting(shu,len);
    printH(shu,len);
    system("pause");
    return 0;
}