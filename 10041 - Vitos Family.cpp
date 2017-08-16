#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main ()
{
    vector<long long>street;
    long long r,road,num,best,i,dis;
    cin>>r;
    while(r--)
    {
        cin>>road;
        dis=0;
        while(road--)
        {
            cin>>num;
            street.push_back(num);
        }
        sort(street.begin(),street.end());
        best = street[ street.size()/2 ];
        for(i=0;i<street.size();i++)
        {
            dis=dis+abs(best-street[i]);
        }
        cout<<dis<<endl;
        street.clear();
    }
    return 0;
}
