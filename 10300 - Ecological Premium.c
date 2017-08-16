#include <stdio.h>
int main ()
{
    double i,t,j,sum,s,a,ef,f;
    scanf("%lf",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&f);
        sum=0;
        for(j=0;j<f;j++)
        {
            scanf("%lf %lf %lf",&s,&a,&ef);
            sum=sum+(((s/a)*ef)*a);
        }
        printf("%.0lf\n",sum);
    }
    return 0;
}
