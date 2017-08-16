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
   string str,temp,ans;
   string END = "E-N-D";
   int len=0;
   while(cin>>str)
   {
      if(str.compare(END)==0) break;
      int c=0;
      for(int i=0;i<str.length();i++)
      {
         if(isalpha(str[i])||str[i]=='-')c++;
      }
      if(len<c) {len=c;ans=str;}
   }
   for(int i=0;i<ans.length();i++)
   {
      if(isupper(ans[i])) ans[i] = tolower(ans[i]);
      if(isalpha(ans[i])||ans[i]=='-') cout<<ans[i];
   }
   cout<<endl;
   return 0;
}
