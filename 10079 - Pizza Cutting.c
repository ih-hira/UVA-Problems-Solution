#include <stdio.h>
int main ()
{
    long long int n,p;
    while(scanf("%lld",&n)){
        if(n<0){
            break;
        }
        p=(n*n+n+2)/2;
        printf("%lld\n",p);
    }
    return 0;
}
