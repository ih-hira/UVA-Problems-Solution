#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
    long int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        long int arr[n+1],arr2[n+1],dontmv=0,j=0;
        for(int l=0;l<n;l++) {cin>>arr[l];arr2[l]=arr[l];}
        sort(arr2,arr2+n);
        for(int k=0;k<n;k++)
        {
            if(arr2[j]==arr[k])j++;
        }
        printf("Case %d: %ld\n",i,n-j);
    }
    return 0;
}
