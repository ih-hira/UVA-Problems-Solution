#include <stdio.h>
#include <string.h>
int main()
{
    char s[110],m[110],i,j,k,p,l,size,count,n;
    while(scanf("%d",&n))
    {
        getchar();
        if(n==0) break;
        gets(s);
        l=strlen(s);
        size=l/n;
        i=size;
        k=0;
        count=0;
        p=0;
        while(1)
        {
            count++;
            m[p++]=s[--i];
            if(i==k)
               {
                k=p;
                i=p+size;
               }
               if(count==l) break;
        }
        m[p]='\0';
        puts(m);
    }
    return 0;
}
