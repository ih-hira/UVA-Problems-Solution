#include <stdio.h>
#include <string.h>
int main ()
{
    char a[10];
    int i,n,j,c=0,c1=0;
    char x[]="one",y[]="two",z[]="three";
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a);
        if (strlen(a)==5)
        {
            printf("3\n");
        }
        else if(strlen(a)==3&&(a[0]==x[0]||a[1]==x[1]||a[2]==x[2])||(a[0]==y[0]||a[1]==y[1]||a[2]==y[2]))
        {
            c=0;
            c1=0;
            for(j=0;j<strlen(a);j++)
            {
                if(a[j]==x[j])
                    c++;
                if(a[j]==y[j])
                    c1++;
            }
            if(c>1)
                printf("1\n");
            else if (c1>1)
                printf("2\n");
        }

    }
    return 0;
}
