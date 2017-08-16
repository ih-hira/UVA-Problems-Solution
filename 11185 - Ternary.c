#include <stdio.h>
int main ()
{
    int n,rem[100],i=0,j;

    while(scanf("%d",&n))
    {
        if(n<0)
        {
            break;
        }
        if(n==0)
        {
            printf("0");
        }
        while(n>0)
        {
            rem[i]=n%3;

            n=n/3;

            i++;
        }
        i--;
        for(;i>=0;i--)
        {
            printf("%d",rem[i]);
        }
        i++;
        printf("\n");
    }
    return 0;
}
