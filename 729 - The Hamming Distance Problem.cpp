#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n,h,t;
    string str;
    cin>>t;
    while(t--)
    {
        str="";
        cin>>n>>h;
        for(int i=0;i<n;i++)
        {
            if(i<(n-h))
                str+="0";
            else
                str+="1";
        }
        do
        {
            cout<<str<<endl;
        }while(next_permutation(str.begin(),str.end()));
        if(t) cout<<endl;
    }
    return 0;
}
