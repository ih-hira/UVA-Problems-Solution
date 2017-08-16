#include <stdio.h>
int main ()
{
    long int x,y,rem,g,l,m,n,i,t,a,b;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&x,&y);
        m=x;
        n=y;
        while(n>0)
        {
            rem=m%n;
            m=n;
            n=rem;
        }
        g=m;
        l=(x*y)/g;
        if(y%x)
        {
           printf("-1\n");
        }
        else
        {
            printf("%ld %ld\n",g,l);
        }

    }
    return 0;
}

