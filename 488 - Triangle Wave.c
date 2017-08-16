#include <stdio.h>
int main ()
{
    int t,a,f,i,j,k,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        scanf("%d %d",&a,&f);

        for(k=0;k<f;k++)
        {
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=(a-1);i>=1;i--)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            if(k<(f-1))printf("\n");
        }
        if(l<(t-1))printf("\n");
    }
    return 0;
}
