#include <iostream>
#include <cstdio>
using namespace std;
int bigmod(long B,long P,long M);
int main ()
{
    long B,P,M;
    while(scanf("%ld %ld %ld",&B,&P,&M)!=EOF)
    {
        int result = bigmod(B,P,M);
        cout<<result<<endl;
    }
    return 0;
}
int bigmod(long B,long P,long M)
{
    if(P==0) return 1;
    else if(P%2==0)
    {
        int p1 = (bigmod(B,P/2,M))%M;
        return (p1*p1)%M;
    }
    else if(P%2==1)
    {
        int p1 = B%M;
        int p2 = (bigmod(B,P-1,M))%M;
        return (p1*p2)%M;
    }
}
