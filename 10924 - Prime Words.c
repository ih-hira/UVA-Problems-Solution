#include <stdio.h>
#include <math.h>
void prime (int n);
int main ()
{
    char a[25];
    int i,sum=0;
    while(gets(a))
    {
        sum=0;
        for(i=0;i<a[i];i++)
        {
            if(a[i]>='a'&&a[i]<='z')
                sum=sum+(a[i]-96);
            else
                sum=sum+(a[i]-38);
        }
        prime(sum);
    }
    return 0;
}
void prime (int n)
{
    int i,flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");
}
