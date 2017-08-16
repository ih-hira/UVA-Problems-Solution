#include <stdio.h>
#include <math.h>
int main ()
{
    long int i,n,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n))
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(sum==n)
            printf("%5ld  PERFECT\n",n);
        else if(sum<n)
            printf("%5ld  DEFICIENT\n",n);
        else if(sum>n)
            printf("%5ld  ABUNDANT\n",n);
    }
    return 0;
}
