#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    long long a,b,c,d,ans;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)  break;

        c=abs(a-b);
        if(c>=50)
        c=100-c;
        cout<<c<<endl;
    }
    return 0;
}
