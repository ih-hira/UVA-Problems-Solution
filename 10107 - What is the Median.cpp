#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long i=0,n,a[100000],l;
    while(cin>>n)
    {
        a[i]=n;
        sort(a,a+i+1);
        if(i%2==0)
            cout<<a[i/2]<<endl;
        else
        {
            l=a[i/2]+a[i/2+1];
            cout<<l/2<<endl;
        }
        i++;
    }
    return 0;
}
