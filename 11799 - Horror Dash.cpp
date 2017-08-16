#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int arr[n+1];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr,arr+n);
        cout<<"Case "<<i<<": "<<arr[n-1]<<endl;
    }
    return 0;
}
