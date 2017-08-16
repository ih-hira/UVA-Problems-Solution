#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int numofitem,cap;
int price[1001],wt[1001],gm[101];
int knapsack01(int n,int c)
{
    int T[n+1][c+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<c+1;j++)
        {
            if(i==0||j==0) T[i][j]=0;
            else if(j<wt[i]) T[i][j]=T[i-1][j];
            else T[i][j]=max((price[i]+T[i-1][j-wt[i]]),T[i-1][j]);
        }
    }
    return T[n][c];
}
int main()
{
    int t,n,g;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>price[i]>>wt[i];
        cin>>g;
        for(int i=0;i<g;i++)
            cin>>gm[i];
        int sum=0;
        for(int i=0;i<g;i++)
            sum=sum+knapsack01(n,gm[i]);
        cout<<sum<<endl;
    }
    return 0;
}
