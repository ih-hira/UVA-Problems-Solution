#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100];
    int i,j,t,sum,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        sum=0;j=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='O')
                sum=sum+(++j);
            else if(a[i]=='X')
                j=0;
        }
        printf("%d\n",sum);

    }
    return 0;
}
