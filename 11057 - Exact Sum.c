#include <stdio.h>
int main()
{
    long n,m,a[100000],d,i,j,b,c;
    while(scanf("%ld",&n)!=EOF)
    {
        d=2000000;
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        scanf("%ld",&m);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                {
                if((a[i]+a[j])==m && i!=j)
                    {
                    if(a[i]>a[j])
                        {
                            if((a[i]-a[j])<d)
                            {
                                b=a[j];
                                c=a[i];
                                d=a[i]-a[j];
                            }
                        }
                    else
                        {
                            if((a[j]-a[i])<d)
                            {
                                b=a[i];
                                c=a[j];
                                d=a[j]-a[i];
                            }
                        }
                    }
                }
            printf("Peter should buy books whose prices are %ld and %ld.\n\n",b,c);
    }
    return 0;
}
