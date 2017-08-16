#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long a,b,n,m,mem,day;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        m=a;
        day=0;
        while(day<b)
        {
            mem=m++;
            day=day+mem;
        }
        cout<<mem<<endl;
    }
   return 0;
}
