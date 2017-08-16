#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main ()
{
    long long arr[10005];
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        memset(arr,0,sizeof(arr));
        for(int i=0;i<b;i++)
            cin>>arr[i];
        sort(arr,arr+b);
        int i=0;
        for(int j=1;j<=a;j++)
        {
            if(j!=arr[i]) cout<<j<<" ";
            else i++;
        }
        if(i==a) cout<<"*"<<endl;
        else cout<<endl;
    }
    return 0;
}
