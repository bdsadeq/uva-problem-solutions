//Ackermann Functions (#371)
//Sadeq

#include<iostream.h>

int main()
{
	long long int x,y,i,max,j,t,tempnum,temp;
	while(cin>>x>>y)
	{
		if(x==0 && y==0) break;
		if(x>y)
		{
			temp=y;
			y=x;
			x=temp;
		}
		max=0;
		for(i=x;i<=y;i++)
		{
			j=0;
			t=i;
			for(;;)
			{
				j++;
				if((t%2)==0) t=t/2;
				else t=3*t+1;
				if(t==1) break;
			}
			if(j>max)
			{
				max=j;
				tempnum=i;
			}
		}
		cout<<"Between "<<x<<" and "<<y<<", "<<tempnum<<" generates the longest sequence of "<<max<<" values."<<endl;
	}
	return 0;
}