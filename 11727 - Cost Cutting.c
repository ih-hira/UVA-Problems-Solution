#include <stdio.h>
int main ()
{
    int i,t,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(b<a&&a<c||b>a&&a>c){
            printf("Case %d: %d\n",i,a);
        }
        if(a<b&&b<c||a>b&&b>c){
            printf("Case %d: %d\n",i,b);
        }
        if(a<c&&c<b||a>c&&c>b){
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
