#include <stdio.h>
#include <stdlib.h>
int main ()
{
    long long int n,num,digit;
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&n);
        num=((((n*567)/9+7492)*235)/47)-498;
        num=num%100;
        digit=abs(num/10);
        printf("%lld\n",digit);
    }
    return 0;
}

