#include <stdio.h>
#include <string.h>
int main ()
{
    char a[500],b[500],c[500];
    int i,j,k;
    while(gets(a))
    {
        if(strcmp(a,"DONE")==0)
            break;
        j=0;
        for(i=0;i<a[i];i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
                b[j++]=a[i]-'A'+'a';

            else if(a[i]>='a'&&a[i]<='z')
                b[j++]=a[i];

        }
        b[j]='\0';

        for(i=strlen(b)-1,k=0;i>=0;i--)
            c[k++]=b[i];
        c[k]='\0';

        if(strcmp(b,c)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
