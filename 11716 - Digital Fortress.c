#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    char a[10005],b[105][105];
    int i,j,k,t,l,r;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(a);
        l=strlen(a);
        r=sqrt(l);
        k=0;
        if(r*r!=l)
            printf("INVALID\n");
        else
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<r;j++)
                {
                    b[i][j]=a[k++];
                }
            }
            for(i=0;i<r;i++)
            {
                for(j=0;j<r;j++)
                {
                    printf("%c",b[j][i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
