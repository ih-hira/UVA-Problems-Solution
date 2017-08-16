#include <stdio.h>
int main ()
{
    unsigned long long a,b,c,d,t;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d&&d==a)
            printf("square\n");
        else if((a==b&&c==d) || (b==c&&d==a) || (a==c&&b==d))
            printf("rectangle\n");
        else if (a<=b+c+d && b<=a+c+d && c<=a+b+d && d<=a+b+c)
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
