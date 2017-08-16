#include <stdio.h>
int main ()
{
    int n,p;
    while(scanf("%d",&n)!=EOF){
        p=n+n/2;
        printf("%d\n",p);
    }
    return 0;
}
