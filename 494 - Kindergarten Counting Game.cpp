#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main ()
{
    string s;
    while(getline(cin,s))
    {
        int count=0;
        for(int i=0;i<s.length();)
        {
            if(isalpha(s[i]))
            {
                count++;
                while(isalpha(s[i++]));
            }
            else i++;
        }
        cout<<count<<endl;
    }
    return 0;
}
