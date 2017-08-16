#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100];
    int t,sum=0,taka;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%s",a);
       if(strcmp(a,"donate")==0)
       {
           scanf("%d",&taka);
           sum=sum+taka;
       }
       else
       {
           printf("%d\n",sum);
       }
    }
    return 0;
}
