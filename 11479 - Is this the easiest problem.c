#include <stdio.h>
int main ()
{
    long int a,b,c;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a+b<=c || a+c<=b || b+c<=a){
            printf("Case %d: Invalid\n",i);
        }
        else if(a==b&&b==c){
            printf("Case %d: Equilateral\n",i);
        }
        else if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a){
            printf("Case %d: Isosceles\n",i);
        }
        else if(a!=b&&b!=c&&c!=a){
            printf("Case %d: Scalene\n",i);
        }
    }
    return 0;
}
