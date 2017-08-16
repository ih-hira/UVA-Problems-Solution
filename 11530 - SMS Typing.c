#include <stdio.h>
#include <string.h>
int main ()
{
    char c[105];
    int i,j,t,l,count;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        count=0;
        gets(c);
        l=strlen(c);
        for(j=0;j<l;j++)
        {
            if(c[j]=='a'||c[j]=='d'||c[j]=='g'||c[j]=='j'||c[j]=='m'||c[j]=='p'||c[j]=='t'||c[j]=='w'||c[j]==' ')
                count=count+1;
            else if(c[j]=='b'||c[j]=='e'||c[j]=='h'||c[j]=='k'||c[j]=='n'||c[j]=='q'||c[j]=='u'||c[j]=='x')
                count=count+2;
            else if(c[j]=='c'||c[j]=='f'||c[j]=='i'||c[j]=='l'||c[j]=='o'||c[j]=='r'||c[j]=='v'||c[j]=='y')
                count=count+3;
            else if(c[j]=='s'||c[j]=='z')
                count=count+4;
        }
        printf("Case #%d: %d\n",i,count);
    }
    return 0;
}
