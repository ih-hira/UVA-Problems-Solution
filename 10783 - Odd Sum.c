#include <stdio.h>
int main ()
{
    int i,t,a,b,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int sum=0;
        scanf("%d %d",&a,&b);
        if(a%2!=0){
            n=a;
        }
        if(a%2==0){
            n=a+1;
        }
        for(m=n;m<=b;m=m+2){
            sum=sum+m;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
