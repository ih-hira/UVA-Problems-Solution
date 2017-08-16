#include <stdio.h>
#include <math.h>

int main()
{
    int n,x,y,flag;
    while (scanf("%d",&n))
    {
        if(n==0)
            break;
        flag=0;
        for (x=1;x<=sqrt(n);x++)
        {
            if (x*x*x>n)
            {
                for (y=1;y<x;y++)
                {
                    if (x*x*x-y*y*y ==n)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
                break;
        }
        if (flag==1)
        {
            printf("%d %d\n",x,y);
        }
        else
        {
            printf("No solution\n");
        }
    }
    return 0;
}
