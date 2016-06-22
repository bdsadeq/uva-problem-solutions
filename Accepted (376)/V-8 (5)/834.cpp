//Continued Fractions (#834)
//Sadeq

#include<stdio.h>

int main()
{
	long a,b,c,res[100];
	long i,j;
	while(scanf("%ld %ld",&a,&b)==2)
	{
		for(i=0; ;i++)
		{
			res[i]=a/b;
			c=a%b;
			if(b==1) break;
			a=b;
			b=c;
		}
		printf("[%ld;%ld",res[0],res[1]);
		for(j=2;j<=i;j++)
		{
			printf(",%ld",res[j]);
		}
		printf("]\n");
	}
	return 0;
}