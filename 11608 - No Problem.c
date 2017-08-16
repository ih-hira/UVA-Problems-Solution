#include <stdio.h>
#include <math.h>
int main ()
{
    int a[13],b[13],i,j,total,c=1,extra;
    while(scanf("%d",&total))
    {

        if(total<0) break;

        a[0]=total;
        for(i=1;i<13;i++)
            scanf("%d",&a[i]);
        for(i=0;i<12;i++)
            scanf("%d",&b[i]);
        printf("Case %d:\n",c++);
        for(i=0;i<12;i++)
        {
            if(total>=b[i])
            {
                printf("No problem! :D\n");
                total=total-b[i];
            }
            else
                printf("No problem. :(\n");
            total=total+a[i+1];
        }

    }
    return 0;
}
