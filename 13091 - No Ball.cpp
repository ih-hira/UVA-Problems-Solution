#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    char grid[6][6];
    int t;
    cin>>t;
    getchar();
    for(int k=1;k<=t;k++)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>grid[i][j];
            }
        }
        int f=0;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(grid[i][j]=='>')
                {
                    while(grid[i][j]!='|' && j<5)j++;
                    if(grid[i][j]=='|'){printf("Case %d: Thik Ball\n",k);f=1;break;}
                    else {printf("Case %d: No Ball\n",k);f=1;break;}
                }
                else if(grid[i][j]=='<')
                {
                    while(grid[i][j]!='|' && j>=0)j--;
                    if(grid[i][j]=='|'){printf("Case %d: Thik Ball\n",k);f=1;break;}
                    else {printf("Case %d: No Ball\n",k);f=1;break;}
                }
            }
            if(f) break;
        }
    }
    return 0;
}
