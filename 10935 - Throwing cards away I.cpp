#include <iostream>
#include <queue>
using namespace std;
int main ()
{
    queue<int>qq;
    int n;
    while(cin>>n && n)
    {
        for(int i=1;i<=n;i++)
            qq.push(i);
        cout<<"Discarded cards:";
        while(qq.size()>1)
        {
            cout<<" "<<qq.front();
            qq.pop();
            qq.push(qq.front());
			qq.pop();
			if (qq.size()>1)
				cout<<",";
        }
        cout<<endl;
        cout<<"Remaining card: "<<qq.front()<<endl;
        qq.pop();
    }
    return 0;
}
