#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main ()
{
    string str,temp,temp1;
    while(getline(cin,str))
    {
        temp="";
        if(str.compare("DONE")==0)
            return 0;
        for(int i=0;i<str.length();i++)
        {
            if(isalpha(str[i]) && isupper(str[i]))
                temp+=tolower(str[i]);
            else if(isalpha(str[i]))
                temp+=str[i];

        }
        temp1=temp;
        reverse(temp1.begin(),temp1.end());
        if(temp.compare(temp1)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
