#include <stdio.h>
#include <string.h>
int main ()
{
    char digit [20];
    int a[20],b[20],i,j,t,l,k,sum1,sum2,sum,len;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        l=0;
        sum1=0;
        sum2=0;
        gets(digit);
        len=strlen(digit);
        for(j=0,k=0;j<len;k++)
        {
            if(digit[j]==' ')
            {
                a[k]=(digit[j+1]-'0')*2;
                j=j+3;
            }
            else
            {
                a[k]=(digit[j]-'0')*2;
                j=j+2;
            }
        }

        for(j=0;j<8;j++)
        {
            if(a[j]>9)
            {
                sum1=sum1+((a[j]%10)+(a[j]/10));
            }
            else
                sum1=sum1+a[j];
        }
        for(j=1;j<=len;)
        {
                sum2=sum2+ (digit[j]-'0');
                j=j+2;
                sum2=sum2+ (digit[j]-'0');
                j=j+3;
        }
        sum=sum1+sum2;
        if(sum%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;

}
