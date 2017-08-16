#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int main ()
{
    char d;
    string n;
    while(cin>>d)
    {
        cin>>n;
        if(d=='0' && n.compare("0")==0)
            return 0;
        int z=0;
        long l = n.length();
        string t = "";
        for(long i=0;i<l;i++)
        {
           if(n[i]==d) continue;

           z = (n[i]!='0') || z;

           if(z) cout<<n[i];
        }
        if(!z) cout<<"0"<<endl;
        else cout<<endl;
    }
    return 0;
}
