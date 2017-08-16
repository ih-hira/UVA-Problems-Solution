#include <stdio.h>
#include <math.h>
int rev (int n);
int prime (int n);
int main ()
{
    int n,f,e;
    while(scanf("%d",&n)!=EOF)
    {
        f=prime(n);
        e=rev(n);
        if(f==1&&e==1)
            printf("%d is emirp.\n",n);
        else if(f==1&&e==0)
            printf("%d is prime.\n",n);
        else
            printf("%d is not prime.\n",n);
    }
    return 0;
}
int prime (int n)
{
    int l,i;
    l=sqrt(n+1);
    if(n<=1)
        return 0;
    for(i=2;i<=l;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int rev (int n)
{
    int rem=0,e,m=n;
    while(m!=0)
    {
        rem=rem*10;
        rem=rem+(m%10);
        m=m/10;
    }
    if(rem==n)
        return 0;
    else
    {
        e=prime(rem);
        return e;
    }
}
//CODER: MD. IMTIYAZ HOSSAIN (HIRA)
//AHSANULLAH UNIVERSITY OF SCIENCE AND TECHNOLOGY
//DEPARTMENT OF CSE
//MOB : 8801682371979
//EMAIL : pro.imtiyaz@gmail.com
//facebook : www.facebook.com/imtiyazhossain.hira


