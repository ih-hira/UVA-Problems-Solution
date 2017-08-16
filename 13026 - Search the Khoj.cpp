#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        string list[n+1];
        string no;
        getchar();
        for(int j=1;j<=n;j++)
            cin>>list[j];
        cin>>no;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=1;j<=n;j++)
        {
            int c=0;
            string temp =list[j];
            int l = temp.length();
            for(int k=0;k<l;k++)
            {
                if(no[k]!=temp[k]) c++;
            }
            if(c==1||c==0)
            {
                cout<<temp<<endl;
            }
        }
    }
    return 0;
}
