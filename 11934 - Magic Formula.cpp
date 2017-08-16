#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    long long a,b,c,d,L,ans,con,i;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L))
    {
        con=0;
        if(a==0&&b==0&&c==0&&d==0&&L==0) break;
        else
        {
            for(i=0;i<=L;i++)
            {
                ans = (i*i*a) + (i*b) + c;
                if (ans % d==0)con++;
            }
        }
        cout<<con<<endl;
    }
    return 0;
}
