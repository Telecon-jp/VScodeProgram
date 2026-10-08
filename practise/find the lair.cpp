#include <iostream>
#include <string>
using namespace std;
string booltostring (bool a)
{
    string st1="is the fucking sulprit";
    string st2="is not the sulprit";
    if(a==1)
    {
        return st1;
    }
    else if(a==0)
    {
        return st2;
    }
    else 
    {
        return "";
    }
} 
int main ()
{
    bool A,B,C,D,E,F;
    int g=0;
    for(int i=0;i<2;i++)
    {
        A=i;
        for(int i=0;i<2;i++)
        {
            B=i;
            for(int i=0;i<2;i++)
            {
                C=i;
                for(int i=0;i<2;i++)
                {
                    D=i;
                    for(int i=0;i<2;i++)
                    {
                        E=i;
                        for(int i=0;i<2;i++)
                        {
                            F=i;
                            bool t1=A||B;
                            bool t2=!A||!D;
                            bool t3=A*E||A*F||E*F;
                            bool t4=B*C||!B*!C;
                            bool t5=C&!D||!C&D;
                            bool t6=D||!E;
                            if(t1+t2+t3+t4+t5+t6==6)
                            {
                                bool v[6]={A,B,C,D,E,F};
                                for(int k=0;k<6;k++)
                                {
                                    cout<<char('A'+k)<<" "<<booltostring(v[k])<<"   ";
                                }
                                cout<<"this is the "<<" "<<g+1<<"th"<<" "<<"situation"<<endl;
                                g++;
                            }
        
                        }
                    }
                }           
            }
        }
    }
    cout<<"there are" <<" "<<g<<" "<< "situations"<<endl;
    return 0;    
}