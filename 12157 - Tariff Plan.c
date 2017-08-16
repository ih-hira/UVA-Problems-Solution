#include <stdio.h>
int main ()
{
    int i,n,t,j,k,sum1,rem1,ans1,p=0,q=0,ans2,rem2,sum2;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            scanf("%d",&n);
            ans1=n/30;
            rem1=n%30;
            if(rem1<30)
            {
                rem1=10;
            }
            sum1=ans1*10+rem1;
            p=p+sum1;

            ans2=n/60;
            rem2=n%60;
            if(rem2<60)
            {
                rem2=15;
            }
            sum2=ans2*15+rem2;
            q=q+sum2;
        }
        if(p<q)
        {
            printf("Case %d: Mile %d\n",j,p);
        }
        else if(p>q)
        {
            printf("Case %d: Juice %d\n",j,q);
        }
        else if(p==q)
        {
            printf("Case %d: Mile Juice %d\n",j,p);
        }
        p=0;
        q=0;
    }
    return 0;
}
