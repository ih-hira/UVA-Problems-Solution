#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main ()
{
    string s1[22],s2[22],s3;
    int n,q,i,j;
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
        getline(cin,s1[i]);
        getline(cin,s2[i]);
    }
    cin>>q;
    getchar();
    for(i=0;i<q;i++)
    {
        getline(cin,s3);
        for(j=0;j<n;j++)
        {
            if(s3.compare(s1[j])==0)
            {
                cout<<s2[j]<<endl;
                break;
            }
        }
    }
    return 0;
}
