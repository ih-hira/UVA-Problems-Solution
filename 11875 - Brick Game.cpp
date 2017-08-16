#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a[20],n,i,j,t,index;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        index=n/2;
        cout<<"Case "<<j<<": "<<a[index]<<endl;

    }
    return 0;
}
