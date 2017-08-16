#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cstdio>
using namespace std;
int c[26];
int main ()
{
    int n,i,l;
    string s;
    vector<int>v;
    cin>>n;
    getchar();
    while(n--)
    {
        l=0;
        getline(cin,s);
        for(i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=s[i]-'A'+'a';
                c[s[i]-'a']++;
            }
            else if(islower(s[i]))
                c[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(c[i]>0)
                {
                    v.push_back(c[i]);
                    l++;
                }
        }
        sort(v.begin(),v.end());
        for(i=0;i<26;i++)
        {
            if(c[i]==v[l-1])
                printf("%c",(i+'a'));
        }
        cout<<endl;
        memset(c,0,sizeof(c));
        v.clear();
    }
    return 0;
}
