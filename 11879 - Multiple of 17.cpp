#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int i,sum,rem,l;
    char s[1000];
    while(gets(s))
    {
        if(strcmp(s,"0")==0)
            break;
        rem=0;
        l=strlen(s);

        for(i=0;i<l;i++)
        {
             sum=rem*10+(s[i]-'0');
             rem=sum%17;
         }

        if(rem==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
