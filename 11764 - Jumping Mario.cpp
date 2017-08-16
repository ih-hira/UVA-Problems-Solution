#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a[100],i,j,t,n,high,low;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        high=0;
        low=0;
        for(j=0;j<n;j++)
            cin>>a[j];
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]>a[j])
                high++;
            else if(a[j+1]==a[j])
                continue;
            else
                low++;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
