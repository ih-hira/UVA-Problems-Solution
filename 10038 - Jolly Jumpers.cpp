#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    long long a[3006],b[3006],n,i,j,dif,temp,f;
    while(scanf("%lld",&n)!=EOF)
    {
        f=0;
        j=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            b[j++]=abs(a[i]-a[i+1]);

        }
        sort(b,b+j);
        //temp=abs(b[0]-b[1]);
        for(i=0;i<n-1;i++)
        {
            if(b[i]!=(i+1))
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    return 0;
}
