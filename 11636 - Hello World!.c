#include <stdio.h>
int main()
{
    int i,j=1,n,c=0;
    while(scanf("%d",&n))
    {
        if(n<0)
        {
            break;
        }
        for(i=1;i<n;i=2*i)
        {
            c++;
        }
        printf("Case %d: %d\n",j,c);
        c=0;
        j++;

    }
    return 0;
}
