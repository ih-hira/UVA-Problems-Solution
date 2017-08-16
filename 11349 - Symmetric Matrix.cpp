#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        bool sym=true;
        char ch [10];
        getchar ();
        gets (ch);
        sscanf (ch, "%c = %d", &ch [0], &n);
        scanf("N = %d",&n);
        long long int arr[n+1][n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]<0) sym=false;
            }
        }
        if(sym==false){cout<<"Test #"<<t<<": Non-symmetric."<<endl;continue;}
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(arr[i][j]!=arr[n-1-i][n-1-j]){sym=false;break;}
                }
                if(sym==false)break;
            }
            if(sym) cout<<"Test #"<<t<<": Symmetric."<<endl;
            else cout<<"Test #"<<t<<": Non-symmetric."<<endl;
        }
    }
}
