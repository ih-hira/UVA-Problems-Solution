#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main ()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t=13,c=0;
        while(t--)
        {
            cin>>x;
            if(x==0) c++;
        }
        if(c)
        {
            cout<<"Set #"<<i<<": No"<<endl;
        }
        else
        {
            cout<<"Set #"<<i<<": Yes"<<endl;
        }
    }
    return 0;
}
