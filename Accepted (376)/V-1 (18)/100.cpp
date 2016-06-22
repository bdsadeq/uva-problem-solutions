//The 3n + 1 problem (#100)
//Sadeq

#include<iostream.h>

int main()
{
	long x,y,i,max,j,t,temp,num1,num2;
	while(cin>>x>>y)
	{
		max=0;
		num1=x;
		num2=y;
		if(x>y)
		{
			temp=y;
			y=x;
			x=temp;
		}
		for(i=x;i<=y;i++)
		{
			j=0;
			t=i;
			for(;;)
			{
				j++;
				if(t==1) break;
				if((t%2)==1) t=3*t+1;
				else t=t/2;
			}
			if(j>max) max=j;
		}
		cout<<num1<<" "<<num2<<" "<<max<<endl;
	}
	return 0;
}
