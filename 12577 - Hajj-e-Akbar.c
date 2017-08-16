#include <stdio.h>
#include <string.h>
int main ()
{
    char h[]="Hajj",u[]="Umrah",t[]="*",a[20];
    int i=0;
    while(gets(a))
    {
        i++;
        if(strcmp(a,h)==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strcmp(a,u)==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(strcmp(a,t)==0)
            break;
    }
    return 0;
}
