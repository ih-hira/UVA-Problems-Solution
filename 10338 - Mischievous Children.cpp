#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <map>
typedef unsigned long long ull;
using namespace std;
ull a[100000];
ull fact(int n)
{
    if(n==1||n==0) return 1;
    if(a[n]!=-1) return a[n];
    else
    {
        a[n] = n*fact(n-1);
        return a[n];
    }
}
int main ()
{
    string s;
    map<char,int>mp;
    ull n,len,total;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        memset(a,-1,sizeof(a));
        cin>>s;
        len = s.length();
        total = fact(len);
        for(int j=0;j<len;j++)
            mp[s[j]]++;
        for(int j=0;j<len;j++)
            {
                if(mp[s[j]]>1)
                {
                    total=(total/fact(mp[s[j]]));
                    mp[s[j]] =-1;
                }
            }
        cout<<"Data set "<<i<<": "<<total<<endl;
        mp.clear();
    }

    return 0;
}
