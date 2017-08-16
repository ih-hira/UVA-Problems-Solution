#include <stdio.h>
int main ()
{
    int i,n,sum,rem,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        sum=n;
        while(n>=m)
        {
            rem=n/m;
            sum=sum+rem;
            n=(n/m)+(n%m);
        }
        printf("%d\n",sum);
    }
    return 0;
}
