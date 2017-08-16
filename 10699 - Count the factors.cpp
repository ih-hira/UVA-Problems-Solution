#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int num,i=1,j,k,c,main;
    while(cin>>num)
    {
        c=0;i=1;
        main=num;
        if(num==0)
            return 0;
        else
        {
            while(i<=num)
            {
                k=0;
                if(num%i==0)
                {
                    j=1;
                    while(j<=i)
                    {
                        if(i%j==0)
                            k++;
                        j++;
                    }
                    if(k==2)
                        c++;
                }
                i++;
            }
        }
        cout<<main<<" : "<<c<<endl;
    }
   return 0;
}
