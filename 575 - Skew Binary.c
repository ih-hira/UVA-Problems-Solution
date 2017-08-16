#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    char n[100];
    long long sum,l;
    int i;
    while(gets(n))
    {
        if(strcmp(n,"0")==0)
            break;
        else
            l=strlen(n);
            sum=0;
            for(i=0;i<n[i];i++)
            {
                sum=sum+((n[i]-'0')*(pow(2,l)-1));
                l--;
            }
            printf("%lld\n",sum);
    }
    return 0;
}
