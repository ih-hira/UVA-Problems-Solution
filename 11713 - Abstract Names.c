#include <stdio.h>
#include <string.h>
int main ()
{
    int t,i,j,k,c,d;
    char a[100],b[100];
    scanf("%d",&t);
    while(t--)
    {
       scanf("%s %s",a,b);
       c=0;d=0;
       if(strcmp(a,b)==0)
            printf("Yes\n");
       else if(strlen(a)==strlen(b))
       {
           for(i=0;i<a[i];i++)
           {
               if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
                    c++;
           }
           for(i=0;i<a[i];i++)
           {
               if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
               {
                   if(a[i]==b[i]) d++;
               }
           }
           if(c==d) printf("Yes\n");
           else printf("No\n");
       }
       else if(strcmp(a,b)!=0)
            printf("No\n");
    }
    return 0;
}
