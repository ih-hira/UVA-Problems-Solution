#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a>b&&a>c){
            if(a*a==b*b+c*c){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
        if(b>a&&b>c){
            if(b*b==a*a+c*c){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
        if(c>a&&c>b){
            if(c*c==a*a+b*b){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
        if(a==0&&b==0&&c==0){
            break;
        }
    }
    return 0;
}
