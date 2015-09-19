//Humidex (#11241)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in1[2],in2[2];
	double num1,num2;
	double d,h,t;

	while(scanf("%s",&in1))
	{
		if(in1[0]=='E') break;

		scanf("%lf %s %lf",&num1,&in2,&num2);

		if(in1[0]=='D') d=num1;
		else if(in1[0]=='T') t=num1;
		else if(in1[0]=='H') h=num1;

		if(in2[0]=='D') d=num2;
		else if(in2[0]=='T') t=num2;
		else if(in2[0]=='H') h=num2;

		if((in1[0]=='D' && in2[0]=='H') || (in1[0]=='H' && in2[0]=='D'))
		{
			double tempe=(6.11)*exp((5417.7530)*((1/(273.16))-(1/(d+(273.16)))));
			double temph=(0.5555)*(tempe-(10.0));
			t=h-temph;
		}
		else if((in1[0]=='H' && in2[0]=='T') || (in1[0]=='T' && in2[0]=='H'))
		{
			d=(1/(1/(273.16)-log(((h-t)/(0.5555)+(10.0))/(6.11))/(5417.7530))-(273.16));
		}
		else if((in1[0]=='T' && in2[0]=='D') || (in1[0]=='D' && in2[0]=='T'))
		{
			double tempe=(6.11)*exp((5417.7530)*((1/(273.16))-(1/(d+(273.16)))));
			double temph=(0.5555)*(tempe-(10.0));
			h=t+temph;
		}

		printf("T %.1lf D %.1lf H %.1lf\n",t,d,h);

	}

	return 0;
}
