//Ones (#10127)
//Sadeq

#include<stdio.h>

int main()
{
	long in,n,k,one;
	while(scanf("%ld",&in)==1)
	{
		if(in==0) printf("0\n");
		else
		{
			n=1;
			one=1;
			while(1)
			{
				if(n<in)
				{
					n=n*10+1;
					one++;
				}
				k=n%in;
				if(k==0) break;
				else n=k;
			}
			printf("%ld\n",one);
		}
	}
	return 0;
}
