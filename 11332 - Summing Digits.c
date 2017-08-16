#include <stdio.h>
int main ()
{
    long long int n,rem,sum=0,m;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;

        m=n;
        again:
        while(m!=0)
        {
            rem=m%10;
            sum=sum+rem;
            m=m/10;
        }
        if(sum>=10)
        {
            m=sum;
            sum=0;
            goto again;
        }
        if(sum<10)
        {
            printf("%lld\n",sum);
            sum=0;
        }
    }
    return 0;
}
