#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,a,b,c,d,e,count;
    char ans;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        for(i=0;i<t;i++)
        {
            count=0;
            scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
            if(a<=127)
            {
                count++;
                ans='A';
            }
            if(b<=127)
            {
                count++;
                ans='B';
            }
            if(c<=127)
            {
                count++;
                ans='C';
            }
            if(d<=127)
            {
                count++;
                ans='D';
            }
            if(e<=127)
            {
                count++;
                ans='E';
            }
            if(count>1||count==0)
                printf("*\n");
            else
                printf("%c\n",ans);
        }
    }
    return 0;
}
