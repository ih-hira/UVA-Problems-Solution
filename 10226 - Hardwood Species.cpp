#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <iterator>
#include <algorithm>
#include <cstring>
using namespace std;
int main ()
{
    int n;
    scanf("%d\n\n", &n);
    while(n--)
    {
        int i=0;
        string tree;
        map<string,int>mp;
        map<string, int>::iterator it;
        while(getline(cin,tree))
        {
            if(tree.length()==0)    break;

            if (mp.count(string(tree)) == 0)   mp[tree] = 1;

            else    mp[tree]++;

            i++;
        }

		for (it = mp.begin(); it != mp.end(); it++)
        {
            printf("%s %.4lf\n", (*it).first.data(),(double) (*it).second / (double) i * 100.0);
		}
        if (n > 0)
        {
			printf("\n");
            mp.clear();
		}
    }
    return 0;
}
