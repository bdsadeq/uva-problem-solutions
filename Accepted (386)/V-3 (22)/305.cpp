//Joseph (#305)
//Sadeq

#include<stdio.h>

int main()
{
	long k,i,p,temp;
	long x,y;
	long ans[20];

	//create list
	for(i=1;i<14;i++)
	{
		p=i*2;
		temp=i;
		while(1)
		{
			x=p;
			y=(temp-1)%x;
			while(y>=i && x>i)
			{
				x--;
				y=(y-1+temp)%x;
			}
			if(x==i) break;
			temp++;
		}
		ans[i]=temp;
	}

	while(scanf("%ld",&k))
	{
		if(k==0) break;
		printf("%ld\n",ans[k]);
	}
	return 0;
}
