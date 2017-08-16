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
struct birthday{
   string name;
   int dd;
   int mm;
   int yy;
}person[105];
bool cmp(birthday a, birthday b)
{
   if(a.yy==b.yy)
   {
      if(a.mm==b.mm)
      {
         return a.dd>b.dd;
      }
      return a.mm>b.mm;
   }
   return a.yy>b.yy;
}
int main ()
{
   int t;
   cin>>t;
   cin.ignore();
   for(int i=0;i<t;i++)
   {
      cin>>person[i].name;
      cin>>person[i].dd>>person[i].mm>>person[i].yy;
   }
   sort(person,person+t,cmp);
   cout<<person[0].name<<endl;
   cout<<person[t-1].name<<endl;
   return 0;
}
