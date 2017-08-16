#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    string str;
    char temp;
    while(getline(cin,str))
    {
        if(str.compare("*")==0)break;
        temp=str[0];
        int f=1;
        for(int i=0;i<str.length();)
        {
            if(temp==toupper(str[i])||temp==tolower(str[i]))
            {
                while(isalpha(str[i++]));
            }
            else {f=0;break;}
        }
        if(f) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
}
