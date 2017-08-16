#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
int main ()
{
    int t,n,j,ans,a1,a2;
    char str1[101],str2[101];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ans=0;
        cin>>n;
        getchar();
        scanf("%s %s",str1,str2);
        for(j=0;j<strlen(str1);j++)
        {
            int a1 = abs(str1[j]-str2[j]);
            int a2 = abs(10-a1);
            if(a1<a2)
                ans=ans+a1;
            else
                ans=ans+a2;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
