#include <stdio.h>
int main ()
{
    int i,t;
    float f,c,d,temp,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%f %f",&c,&d);
        f=(9*c/5)+32;
        temp=f+d;
        n=((temp-32)*5)/9;
        printf("Case %d: %0.2f\n",i,n);
    }
    return 0;
}
