#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int w,l,r1,r2;
    double pi =acos(-1);
    while(cin>>w>>l>>r1>>r2 &&w &&l &&r1 &&r2)
    {
        int low = l<w ? l:w;
        if(r1*2>low || r2*2>low)
            cout<<"N"<<endl;
        else
        {
            int x = l-(r1+r2);
            int y = w-(r1+r2);
            int r= r1+r2;
            if(x*x+y*y>=r*r)
                cout<<"S"<<endl;
            else
                cout<<"N"<<endl;
        }
    }
    return 0;
}
