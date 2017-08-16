#include <stdio.h>
int main ()
{
    int i,t,n,j,b,w,d,a;
    char c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            b=0;
            w=0;
            d=0;
            a=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf(" %c",&c);
            if(c=='B'){
                b++;
            }
            else if(c=='W'){
                w++;
            }
            else if(c=='T'){
                d++;
            }
            else if(c=='A'){
                a++;
            }
        }
        if(a==n){
            printf("Case %d: ABANDONED\n",i);
        }
        else if(a+b==n){
            printf("Case %d: BANGLAWASH\n",i);
        }
        else if(w+a==n){
            printf("Case %d: WHITEWASH\n",i);
        }
        else if(b>w){
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        }
        else if(w>b){
            printf("Case %d: WWW %d - %d\n",i,w,b);
        }
        else{
            printf("Case %d: DRAW %d %d\n",i,b,d);
        }
    }
    return 0;
}
