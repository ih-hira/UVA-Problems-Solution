#include <stdio.h>
#include <math.h>
int main ()
{
	double u,a,t,v,s,c;
	int count=0;
	while(scanf("%lf",&c)){
		count++;
		if(c==0){
			break;
		}
		else if(c==1){
			scanf("%lf %lf %lf",&u,&v,&t);
			a=(v-u)/t;
			s=(v*v-u*u)/(2*a);
			printf("Case %d: %.3lf %.3lf\n",count,s,a);
		}
		else if(c==2){
			scanf("%lf %lf %lf",&u,&v,&a);
			t=(v-u)/a;
			s=(v*v-u*u)/(2*a);
			printf("Case %d: %.3lf %.3lf\n",count,s,t);
		}
		else if(c==3){
			scanf("%lf %lf %lf",&u,&a,&s);
			v=sqrt((u*u)+(2*a*s));
			t=(v-u)/a;
			printf("Case %d: %.3lf %.3lf\n",count,v,t);
		}
		else if(c==4){
			scanf("%lf %lf %lf",&v,&a,&s);
			u=sqrt((v*v)-(2*a*s));
			t=(v-u)/a;
			printf("Case %d: %.3lf %.3lf\n",count,u,t);
		}
	}
	return 0;
}
