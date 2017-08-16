#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main ()
{
    int n,q,x,j=0;
    int marbel[10001];
    while(cin>>n>>q &&n&&q)
    {
        for(int i=0;i<n;i++)
            cin>>marbel[i];
        sort(marbel,marbel+n);
        printf("CASE# %d:\n",++j);
        while(q--)
        {
            cin>>x;
            int f=0;
            for(int i=0;i<n;i++)
            {
                if(marbel[i]==x)
                {
                    cout<<x<<" found at "<<i+1<<endl;
                    f=1;
                    break;
                }
            }
            if(f!=1) cout<<x<<" not found"<<endl;
        }
    }
    return 0;
}
