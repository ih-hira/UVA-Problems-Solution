#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
   char str1[1000];
   string str2[1000];
   string temp;
   int k;
   while(gets(str1))
   {
       temp="";k=0;
       for(int i=0;i<strlen(str1)+1;i++)
       {
           if(str1[i]!=' '&&str1[i]!='\0')
                temp+=str1[i];
            else
            {
                str2[k++]=temp;
                temp="";
            }
       }
       for(int i=0;i<k;i++)
       {
            reverse(str2[i].begin(),str2[i].end());
       }
        for(int i=0;i<k;i++)
        {
            if(i<(k-1)) cout<<str2[i]<<" ";
            else cout<<str2[i]<<endl;
        }
   }
   return 0;
}
