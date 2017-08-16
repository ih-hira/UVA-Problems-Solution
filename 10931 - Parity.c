#include <stdio.h>
#include <string.h>
int main()
{
    long long int n,rem[50],i,c,j;
    char ch[50];
    while(scanf("%lld",&n))
    {
        i=0;
        if(n==0)
            break;
        while(n>0){
            rem[i]=n%2;
            n=n/2;
            i++;
        }
        i--;
        c=0;
        j=0;
        for(;i>=0;i--)
        {
            if(rem[i]==1)
                c++;
                ch[j]=rem[i]+48;
                j++;
        }
        ch[j]='\0';
        printf("The parity of %s is %lld (mod 2).\n",ch,c);
    }
    return 0;
}
