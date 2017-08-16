#include <iostream>
#include <algorithm>
#include <stdio.h>
long int a[2000005];
using namespace std;
int main()
{
   int n,i,j,temp;
   while(cin>>n)
   {
       if(n==0) break;

       for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
       for(i=0;i<n;i++)
       {
           if(i<n-1) printf("%d ",a[i]);
           else printf("%d",a[i]);
       }
       printf("\n");
   }
   return 0;
}
