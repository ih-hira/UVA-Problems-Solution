#include <stdio.h>
int count [10];
int main ()
{
    int i,n,t,j,rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            rem=i;
            while(rem)
            {
                count[rem%10]++;
                rem=rem/10;
            }
        }
        for(i=0;i<10;i++)
            {
                if(i<9)printf("%d ",count[i]);
                else printf("%d",count[i]);
            }
        printf("\n");
        for(i=0;i<10;i++)
            count[i]=0;
    }
    return 0;
}
