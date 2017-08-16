#include <stdio.h>
#include <math.h>
int main ()
{
    double w,r,red,g,pi,l;
    int i,t;
    pi=acos(-1);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&l);
        w=(l*6)/10;
        r=(l*1)/5;
        red=(pi*r*r);
        g=(w*l)-red;
        printf("%.2lf %.2lf\n",red,g);
    }
    return 0;
}
