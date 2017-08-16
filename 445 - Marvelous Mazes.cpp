#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str;
    while(getline(cin,str))
    {
        int l= str.length();
        int n=0;
        if(l==0){cout<<endl;continue;}
        for(int i=0;i<l;i++)
        {
            n=0;
            if(str[i]=='!')
            {
                cout<<endl;
                continue;
            }
            if(isdigit(str[i]))
            {
                while(isdigit(str[i]))n+=str[i++]-48;

            }
            //else
            //{
                if(str[i]=='!')cout<<endl;
                else if(str[i]=='b' && i!=0)
                {
                    for(int j=0;j<n;j++)cout<<" ";
                }
                else if(isalpha(str[i])||str[i]=='*')
                {
                    for(int j=0;j<n;j++)cout<<str[i];
                }
                else
                    cout<<" ";
           // }
        }
        cout<<endl;
    }
}
