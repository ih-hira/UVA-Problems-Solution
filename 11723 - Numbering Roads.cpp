#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cmath>
#include <climits>
#include <iterator>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
using namespace std;
#define MIN INT_MIN
#define MAX LONG_LONG_MAX
#define MAX_INDEX 100005
#define const double PI = acos(-1.0)
#define inf 1<<31-1
int main ()
{
   int r,n,i=0;
   while(scanf("%d %d",&r,&n) && r && n)
   {
      int c=0,f=1,recu=n;
      i++;
      if(r<=n)
      {
         printf("Case %d: %d\n",i,c);
      }
      else
      {
         for(int j=0;j<26;j++)
         {
            recu+=n;
            c++;
            if(r<=recu)
            {
               printf("Case %d: %d\n",i,c);
               f=0;
               break;
            }
         }
         if(f) printf("Case %d: impossible\n",i,c);
      }
   }
   return 0;
}
