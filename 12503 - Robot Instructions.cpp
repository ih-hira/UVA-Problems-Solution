#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main ()
{
    int t,n,r;
    string temp[120],str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p=0;
        for(int i=1;i<=n;i++)
        {
            //fflush(stdin);
            //getline(cin,str);
            cin>>str;
            if(str.compare("RIGHT")==0)
            {
                p++;
                temp[i]=str;
            }
            else if(str.compare("LEFT")==0)
            {
                p--;
                temp[i]=str;
            }
            else
            {
                cin>>str;
                cin>>r;
                if(temp[r].compare("RIGHT")==0)
                    {
                        p++;
                        temp[i]=temp[r];
                    }
                else
                    {
                        p--;
                        temp[i]=temp[r];
                    }
            }
        }
        cout<<p<<endl;
    }
}
