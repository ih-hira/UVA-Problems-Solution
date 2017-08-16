#include <stdio.h>
int main ()
{
    int i,n,sum,a[55],avg,j=0,sum1;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else
        {
            j++;
            sum=0;
            sum1=0;
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);

            for(i=0;i<n;i++)
                sum=sum+a[i];

            avg=sum/n;
            for(i=0;i<n;i++)
            {
                if(a[i]>avg)
                    sum1=sum1+(a[i]-avg);
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,sum1);
        }
    }
    return 0;
}
