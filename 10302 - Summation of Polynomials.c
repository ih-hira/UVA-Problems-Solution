#include <stdio.h>
int main ()
{
    long long int sum,x,i;
    while(scanf("%lld",&x)!=EOF)
    {
        sum=(x*x*(x+1)*(x+1))/4;
        printf("%lld\n",sum);
    }
    return 0;
}
