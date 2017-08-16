#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
int c[26],value[26];
int main ()
{
    char str[1000];
    int i,j,n,t;
    scanf("%d",&n);
    getchar();
    for(j=0;j<n;j++)
    {
        gets(str);
        for(i=0;i<str[i];i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i]=str[i]-'a'+'A';
                c[str[i]-'A']++;
                value[str[i]-'A']++;
            }
            else if(str[i]>='A'&&str[i]<='Z')
            {
                c[str[i]-'A']++;
                value[str[i]-'A']++;
            }
        }
    }
    sort(value,value+26);
    for(i=25;i>=0;i--)
    {
      if(value[i]>0)
      {
          for(j=0;j<26;j++)
          {
              if(value[i]==c[j])
              {
                  printf("%c %d\n",(j+'A'),c[j]);
                  c[j]=0;
              }
          }
      }
    }
    return 0;
}
