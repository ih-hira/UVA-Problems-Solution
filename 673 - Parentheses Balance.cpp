#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdio>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string str;
        getline(cin,str);
        stack<char>brace;
        int i;
        if(str.length()==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        for(i=0;i<str.length();i++)
        {
            if(isspace(str[i])) continue;
            else if(str[i]=='('||str[i]=='[') brace.push(str[i]);
            else if(!brace.empty()&&str[i]==')'&&brace.top()=='(') brace.pop();
            else if(!brace.empty()&&str[i]==']'&&brace.top()=='[') brace.pop();
            else break;
        }
        if(brace.empty()&&(i==str.length())) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
