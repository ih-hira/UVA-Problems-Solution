#include <stdio.h>
int main ()
{
    long long int h,o,d;
    while (scanf("%lld %lld",&h,&o)!=EOF)
    {
        d=(o-h);
        if(d<0)
            d=d*(-1);
        printf("%lld\n",d);
    }
    return 0;
}
