//Subway (#10124)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long double D,M,A,J;
	long double j_acc_lmt,j_speed_lmt,j_dist_lmt,j_time,a_time;
	long double a,b,c,r,dist,result;

	while(scanf("%Lf %Lf %Lf %Lf",&D,&M,&A,&J)==4)
	{
		//i don't the proper way to solve this
		//but this is the exact way (may be)

		j_acc_lmt=A/J;
		j_speed_lmt=sqrt(M/J);
		j_dist_lmt=exp(log(D/2/J)/3);
		j_time=j_acc_lmt;

		if(j_speed_lmt<j_time) j_time=j_speed_lmt;
		if(j_dist_lmt<j_time) j_time=j_dist_lmt;

		a_time=(M-J*pow(j_time,2))/A;

		a=0.5*A;
		b=A*j_time+0.5*J*pow(j_time,2);
		c=J*pow(j_time,3)-D/2;
		r=(-b+sqrt(b*b-4*a*c))/(2*a);

		if(r<a_time) a_time=r;

		dist=J*pow(j_time,3)+0.5*J*pow(j_time,2)*a_time+0.5*A*pow(a_time,2)+A*a_time*j_time;
		result=4*j_time+2*a_time+2*(D/2-dist)/M;

		printf("%.1Lf\n",result);
	}
	return 0;
}
