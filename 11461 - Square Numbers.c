#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,i,sq,count;
    while(scanf("%d %d",&a,&b))
    {
        count=0;
         if(a==0&&b==0)
        {
            break;
        }
        for(i=a;i<=b;i++)
        {
            sq=sqrt(i);
            if(i==sq*sq)
            {
                count++;
            }
        }
       printf("%d\n",count);
    }
    return 0;
}
