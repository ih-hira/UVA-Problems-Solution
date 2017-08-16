#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    int mango[15],limit[15];
    int type,eating_limit;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int total_mango=0,f=0;
        cin>>type>>eating_limit;
        for(int j=0;j<type;j++)
            {
                cin>>mango[j];
                total_mango+=mango[j];
            }
        for(int j=0;j<type;j++)
            cin>>limit[j];

        if(eating_limit<total_mango)
            printf("Case %d: No\n",i);
        else
        {
            for(int j=0;j<type;j++)
            {
                if(mango[j]>limit[j])
                    {
                        printf("Case %d: No\n",i);
                        f=1;
                        break;
                    }
            }
            if(f==0)
                printf("Case %d: Yes\n",i);
        }
    }
    return 0;
}
