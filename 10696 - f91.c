#include <stdio.h>
int main ()
{
    long long int n,p,t;
    while(scanf("%lld",&n))
    {
        if(n==0)
        {
            break;
        }
        else if(n<=100)
        {
            t=91;
            printf("f91(%lld) = %lld\n",n,t);
        }
        else if(n>=101)
        {
            p=n-10;
            printf("f91(%lld) = %lld\n",n,p);
        }
    }
    return 0;
}
