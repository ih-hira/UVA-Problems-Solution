#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main ()
{
    char str[100];
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(str);
        double mass=0;
        char temp;
        for(int i=0;i<strlen(str);)
        {
            if(str[i]=='C')
                {mass+=12.01;temp='C';}
            else if(str[i]=='H')
                {mass+=1.008;temp='H';}
            else if(str[i]=='O')
                {mass+=16.00;temp='O';}
            else if(str[i]=='N')
                {mass+=14.01;temp='N';}
            else
            {
                int j=0; char qn[5];
                while(!isalpha(str[i]))
                    qn[j++]=str[i++];
                int quantity = atoi(qn);
                if(temp=='C')
                {
                    mass-=12.01;
                    mass+=12.01*quantity;
                    continue;
                }
                else if(temp=='H')
                {
                    mass-=1.008;
                    mass+=1.008*quantity;
                    continue;
                }
                else if(temp=='O')
                {
                    mass-=16.00;
                    mass+=16.00*quantity;
                    continue;
                }
                else if(temp=='N')
                {
                    mass-=14.01;
                    mass+=14.01*quantity;
                    continue;
                }
            }
            i++;
        }
        printf("%.3lf\n",mass);
    }
    return 0;
}
