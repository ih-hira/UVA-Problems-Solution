#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,k,t,count,l1,l2;
    char a[25],b[25],c[25];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        gets(b);
        count=0;
        if(strcmp(a,b)==0)
            printf("Case %d: Yes\n",i);

        else
        {
            for(j=0,k=0;j<a[j];j++)
            {
                if(a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z')
                {
                    c[k]=a[j];
                    k++;
                }
            }
            c[k]='\0';
            for(j=0;j<a[j];j++)
            {
                if(a[j]!=b[j])
                {
                    count++;
                    break;
                }
            }
            if(strcmp(c,b)==0&&count!=0)
                printf("Case %d: Output Format Error\n",i);
            else
                printf("Case %d: Wrong Answer\n",i);
        }

    }
    return 0;
}
