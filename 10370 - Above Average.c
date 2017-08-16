#include <stdio.h>
int main ()
{
    int a[1020],i,j,n,t,sum,avg,c;
    float per;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        c=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        avg=sum/n;
        for(j=0;j<n;j++)
        {
            if(a[j]>avg)
            {
                c++;
            }
        }
        per=(float)c*100/(float)n;
        printf("%.3f%%\n",per);
    }
    return 0;
}
