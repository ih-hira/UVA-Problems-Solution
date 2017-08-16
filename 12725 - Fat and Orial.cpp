#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
   double n,m,a,b,ans;
   int i,t;
   cin>>t;
   for(i=1;i<=t;i++)
   {
        cin>>n>>m>>a>>b;
       ans=(m*(a+b)-(n*a))/b;
       if(ans>=0.0 && ans<=10.00)
            printf("Case #%d: %.2lf\n",i,ans);
       else
            printf("Case #%d: Impossible\n",i);
   }
   return 0;
}
