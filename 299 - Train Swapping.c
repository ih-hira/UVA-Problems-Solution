#include <stdio.h>
int main ()
{
    int i,t,l,j,a[55],c,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%d",&l);
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<=l-1;j++)
        {
            for(k=j+1;k<l;k++)
            {
                if(a[j]>a[k])
                    c++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
