#include <stdio.h>
long long int sq (long long int n);
int main ()
{
    long long int i,j,p,n,sum,s;
    scanf("%lld",&p);
    for(i=1;i<=p;i++)
    {
        scanf("%lld",&n);
        s=n;
        while(s>=10)
        {
            sum=0;
            while(s!=0)
            {
                sum=sum+sq(s%10);
                s=s/10;
            }
            s=sum;

        }
        if(s==1||s==7)
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
    }
    return 0;
}
long long int sq (long long int n)
{
    return n*n;
}
