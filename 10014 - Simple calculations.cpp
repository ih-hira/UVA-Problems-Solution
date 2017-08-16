#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main ()
{
    int t,n;
    double a0,aN,c,sum;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        sum=0;
        if(j>0) cout<<endl;
        cin>>n;
        cin>>a0>>aN;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            sum+=(n-i)*c;
        }
        printf("%.2lf\n",((n*a0+aN-2*sum)/(n+1)));
    }
    return 0;
}
