#include <stdio.h>
#include <string.h>
char a[100005];
char b[1005];
int main ()
{
    int t,i,j,c,q,l,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        scanf("%d",&q);
        for(i=0;i<q;i++)
        {
            scanf("%s",b);
            for(j=0,k=0;a[j]&&b[k];j++)
            {
                if(a[j]==b[k])
                    k++;
                else
                    k=0;
            }
            if(k==strlen(b))
                printf("y\n");
            else
                printf("n\n");
        }
    }
    return 0;
}
