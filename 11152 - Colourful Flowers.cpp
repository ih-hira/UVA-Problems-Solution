#include <iostream>
#include <cmath>
#define pi 3.141592653589793
#include <stdio.h>
using namespace std;
int main()
{
   double a,b,c,s,TA,BR,sr,sunf,violate,rose;
   while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
   {
        s=(a+b+c)/2;
        TA=sqrt(s*(s-a)*(s-b)*(s-c));

        BR=(a*b*c)/(4*TA);
        sr=TA/s;

        sunf=(pi*pow(BR,2))-TA;
        violate=TA-(pi*pow(sr,2));
        rose=pi*pow(sr,2);
        printf("%.4lf %.4lf %.4lf\n",sunf,violate,rose);

   }
   return 0;
}
