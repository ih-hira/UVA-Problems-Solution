#include <stdio.h>
int main ()
{
    int i,t,t1,t2,fi,att,ct1,ct2,ct3,ct,tm;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&fi,&att,&ct1,&ct2,&ct3);
        if(ct1<=ct2 && ct1<=ct3) ct=(ct2+ct3)/2;
        if(ct2<=ct1 && ct2<=ct3) ct=(ct1+ct3)/2;
        if(ct3<=ct1 && ct3<=ct2) ct=(ct1+ct2)/2;

        tm=t1+t2+fi+att+ct;

        if(tm>=90) printf("Case %d: A\n",i);
        else if(tm>=80 && tm!=90) printf("Case %d: B\n",i);
        else if(tm>=70 && tm!=80) printf("Case %d: C\n",i);
        else if(tm>=60 && tm!=70) printf("Case %d: D\n",i);
        else if(tm<60) printf("Case %d: F\n",i);
    }
    return 0;
}

