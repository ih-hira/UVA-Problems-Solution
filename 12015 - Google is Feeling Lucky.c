#include <stdio.h>
#include <string.h>
int main ()
{
    char a[10][105];
    int i,j,t,b[15],big;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        big=0;
        for(i=0;i<10;i++)
        {
            scanf("%s",a[i]);
            scanf("%d",&b[i]);
        }
        for(i=0;i<10;i++)
        {
            if(b[i]>big)
                big=b[i];
        }
        printf("Case #%d:\n",j);
        for(i=0;i<10;i++)
        {
            if(b[i]==big)
                puts(a[i]);
        }
    }
    return 0;
}
