#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
int main ()
{
    string str;
    map<char,double>mp;
    mp['W']=1.0; mp['H']=1.0/2;
    mp['Q']=1.0/4; mp['E']=1.0/8;
    mp['S']=1.0/16; mp['T']=1.0/32;
    mp['X']=1.0/64;
    int total;
    while(cin>>str)
    {
        total=0;
        if(str.compare("*")==0) return 0;
        for(int i=1;i<str.length();i++)
        {
            double temp=0;
            while(isalpha(str[i]))
            {
                temp+=mp[str[i++]];
            }
            if(temp==1.00)
                total+=temp;
        }
        cout<<total<<endl;
    }
    return 0;
}
