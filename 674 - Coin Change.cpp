#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int count( int S[], int m, int n )
{

    int table[n+1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}
int main()
{
   int amount,ans;
   int coins[]={1,5,10,25,50};
   int m = sizeof(coins)/sizeof(coins[0]);
   while(scanf("%d",&amount)!=EOF)
   {
        cout<<count(coins, m, amount)<<endl;
   }
   return 0;
}
