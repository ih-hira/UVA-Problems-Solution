#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#define M 100000
using namespace std;
bool prime[M];
int arr[M];
void primegenerate() //prime numbers are true
{
    int i,j,l;
    l=sqrt(M);
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=true;
    for(i=2;i<l;i++)
    {
        if(prime[i])
        {
            for(j=i+i;j<M;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main ()
{
    primegenerate();
    int n,c,j,low,up;
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        j=0;
        for(int i=1;i<=n;i++)
            if(prime[i])
            {
                arr[j++]=i;
            }

        if(j%2==0)
        {
            low = (j/2-1)-(c-1);
            up = low+2*c;
        }
        else
        {
            low = (j/2-1+1)-(c-1);
            up = low+2*c-1;
        }
        low = low<0 ? 0:low;
        up = up>j-1 ? j:up;
        cout<<n<<" "<<c<<":";
        for(int i=low;i<up;i++)
            cout<<" "<<arr[i];
        cout<<endl<<endl;
    }
    return 0;
}
