#include <stdio.h>
int main ()
{
    int a[1001],i,j,n,c,t;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(i=0;i<=n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
