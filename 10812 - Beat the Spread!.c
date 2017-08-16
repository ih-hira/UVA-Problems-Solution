#include <stdio.h>
int main ()
{
    int t,i,a,b,s,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&s,&d);
        if(s<d)
            printf("impossible\n");
        else
           {
                a=(s+d)/2;
                b=(s-d)/2;
                if((a+b)==s)
                {
                    if(a>b)
                        printf("%d %d\n",a,b);
                    else
                        printf("%d %d\n",b,a);
                }
                else
                    printf("impossible\n");
           }
    }
    return 0;
}
