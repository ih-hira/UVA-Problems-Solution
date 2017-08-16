#include <stdio.h>
int gcd(int i,int j);
int main ()
{
    int n,i,j,g;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g=g+gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
int gcd(int i,int j)
{
    int rem;
    while(j>0)
    {
        rem=i%j;
        i=j;
        j=rem;
    }
    return i;
}
