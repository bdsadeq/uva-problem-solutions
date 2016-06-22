//Packets (#311)
//Sadeq

#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long p1,p2,p3,p4,p5,p6;
	long long sum,i,temp,temp2;
	
	while(scanf("%lld %lld %lld %lld %lld %lld",&p1,&p2,&p3,&p4,&p5,&p6))
	{
		if(p1==0 && p2==0 && p3==0 && p4==0 && p5==0 && p6==0) break;
		
		//calculation
		sum=p6;
		p6=0;
		sum=sum+p5;
		p1=p1-(p5*11);
		p5=0;
		sum=sum+p4;

		for(i=0;i<p4;i++)
		{
			if(p2<=0) break;
			p2-=5;
		}
		p4=p4-i;

		if(p2<0)
		{
			p1=p1-(labs(p2)*4);
			p2=0;
		}

		for(i=0;i<p4;i++)
		{
			if(p1<=0) break;
			p1=p1-20;
		}
		p4=0;

		sum=sum+(p3/4);
		temp=p3%4;
		p3=0;

		if(temp>0)
		{
			sum++;
			temp2=36-(temp*9);

			if(temp==1)
			{
				p2=p2-5;
				temp2=temp2-(5*4);
			}
			else if(temp==2)
			{
				p2=p2-3;
				temp2=temp2-(3*4);
			}
			else if(temp==3)
			{
				p2=p2-1;
				temp2=temp2-4;
			}

			if(p2<0)
			{
				temp2=temp2+(labs(p2)*4);
				p2=0;
			}
			if(p1>0)
			{
				p1=p1-temp2;
			}
		}
		if(p2>=9)
		{
			sum=sum+(p2/9);
			p2=p2%9;
		}
		if(p2>0)
		{
			sum++;
			temp2=36-(p2*4);
			p2=0;
			p1=p1-temp2;
		}
		if(p1>=36)
		{
			sum=sum+(p1/36);
			p1=p1%36;
		}

		if(p1>0)
		sum++;
		p1=0;

		//output
		printf("%lld\n",sum);
	}
	return 0;
}
