#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main ()
{
    long int N,B,H,W,p;
    while(scanf("%ld%ld%ld%ld",&N,&B,&H,&W)!=EOF)
    {
        long int m[10001],bed[50],i=0,f=0;
        while(H--)
        {
            cin>>p;
            for(int j=0;j<W;j++)
            {
                cin>>bed[j];
            }
            if(B<(p*N))continue;
            for(int j=0;j<W;j++)
            {
                if(bed[j]>=N){m[i++]=p*N;f=1;break;}
            }
        }
        if(f)
        {
            sort(m,m+i);
            cout<<m[0]<<endl;
        }
        else
            cout<<"stay home"<<endl;
    }
    return 0;
}
