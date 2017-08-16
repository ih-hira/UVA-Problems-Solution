#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
int main()
{
    ll a,l,c,i=0,in;
    while(cin>>a>>l)
    {
        if(a<0 && l<0) return 0;
        c=1;
        in=a;
        while(a!=1)
        {
            if(a%2==0) a/=2;
            else a=(3*a+1);
            if(a>l) break;
            c++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++i,in,l,c);
    }
    return 0;
}
