//Primary Arithmetic (#10035)
//Sadeq

#include<stdio.h>

int main()
{
	long long x,y,c,r1,r2,temp;
	while(scanf("%lld %lld",&x,&y))
	{
		temp=0;
		c=0;
		if(x==0 && y==0) break;
		while(1)
		{
			r1=x%10;
			r2=y%10;
			if((r1+r2+temp)>9)
			{
				c++;
				temp=1;
			}
			else temp=0;
			x=x/10;
			y=y/10;
			if(x==0 && y==0) break;
		}
		if(c==0) printf("No carry operation.\n");
		else if(c==1) printf("1 carry operation.\n");
		else printf("%lld carry operations.\n",c);
	}
	return 0;
}