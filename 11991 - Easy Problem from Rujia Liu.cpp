//#include <iostream>
//#include <unordered_map>
//#include <cstdio>
//#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,k,v;
    map <int,vector<int> > p;
    while(scanf("%ld %ld",&n,&m)!=EOF)
    {
        int val;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            p[val].push_back(i);
        }
        while(m--)
        {
            cin>>k>>v;
            if (p.count(v) && p[v].size() >= k)
                cout << p[v][k - 1] + 1 << endl;
            else
                cout << 0 << endl;
        }
        p.clear();
    }
    return 0;
}
