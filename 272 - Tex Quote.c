#include <stdio.h>
#include <string.h>
int main ()
{
    char a[150];
    int f=0,j,i,k;
    while(gets(a))
    {
        for(i=0;i<a[i];i++)
        {
            if(a[i]=='"' && f==0)
            {
                for(j=0;j<2;j++)
                {
                    printf("`");
                }
                f=1;
            }
            else if(a[i]=='"' && f==1)
            {
                for(k=0;k<2;k++)
                {
                    printf("'");
                }
                f=0;
            }
            else
                printf ("%c",a[i]);

        }
        printf("\n");

    }
    return 0;
}
