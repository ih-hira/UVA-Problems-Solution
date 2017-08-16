#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
   double a,b,c,r,k;
   while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
   {

        if(a==0 || b==0 || c==0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
           k=(a+b+c)/2;

           r=(sqrt(k*(k-a)*(k-b)*(k-c)))/k;

           printf("The radius of the round table is: %.3lf\n",r);
        }
   }
   return 0;
}
