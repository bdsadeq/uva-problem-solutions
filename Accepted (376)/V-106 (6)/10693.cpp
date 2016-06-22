//Traffic volume (#10693)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long double l,f,v,vol;
	while(scanf("%Lf %Lf",&l,&f))
	{
		//breaking condition
		if(l==0 && f==0) break;
		//formula
		v=sqrt(l*f*2);
		vol=(v*3600)/(2*l);
		//output
		printf("%.8Lf %.8Lf\n",v,vol);
	}
	return 0;
}