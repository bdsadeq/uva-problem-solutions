//Three-Square (#11342)
//Sadeq

#include<stdio.h>
#include<math.h>

struct
{
	long a,b,c;
}out[501000];

int main()
{
	long i,j,k;
	long in,temp,temp2;
	long cas,c;

	//fill by zero
	for(i=0;i<=50099;i++)
	{
		out[i].a=-1;
		out[i].b=-1;
		out[i].c=-1;
	}

	//create list
	temp=sqrt(50100)+1;
	for(i=temp;i>=0;i--)
	{
		for(j=temp;j>=0;j--)
		{
			for(k=temp;k>=0;k--)
			{
				temp2=(i*i)+(j*j)+(k*k);
				out[temp2].a=i;
				out[temp2].b=j;
				out[temp2].c=k;
			}
		}
	}

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&in);
		if(out[in].a==-1) printf("-1\n");
		else printf("%ld %ld %ld\n",out[in].a,out[in].b,out[in].c);
	}

	return 0;
}
