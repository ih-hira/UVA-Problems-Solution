#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    int i,j,k,t,n,p,q,sum,big;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        big=0;
        cin>>n>>p>>q;
        for(j=0;j<n;j++)
            cin>>a[j];

        for(j=0;j<n;j++)
        {
            if(j>=p || sum+a[j]>q) break;

            else sum+=a[j];
        }
        printf("Case %d: %d\n",i,j);
    }
   return 0;
}
