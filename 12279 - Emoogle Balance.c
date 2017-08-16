#include <stdio.h>
int main ()
{
    long long a[1005],i,n,j,c1,c2,c=0;
    while(scanf("%lld",&n))
    {
        if(n==0) break;
        c++;
        c1=0;c2=0;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]>=1&&a[i]<=99)
                c1++;
            else if(a[i]==0)
                c2++;
        }
        printf("Case %lld: %lld\n",c,c1-c2);
    }
    return 0;
}
