#include <iostream>
#include <map>
#include <climits>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
    map<char,int>mp;
    string str;
    while(getline(cin,str))
    {
        int l = str.length();
        int max=INT_MIN;
        string str1="";
        for(int i=0;i<l;i++)
        {
            if(isalpha(str[i])) mp[str[i]]++;
        }
        for(int i=0;i<l;i++)
        {
            max = (mp[str[i]]>max)? mp[str[i]]:max;
        }
        for(int i=0;i<l;i++)
        {
            if(mp[str[i]]==max) {str1+=str[i]; mp[str[i]]=-1;}
        }
        sort(str1.begin(),str1.end());
        cout<<str1<<" "<<max<<endl;
        mp.clear();
    }
}
