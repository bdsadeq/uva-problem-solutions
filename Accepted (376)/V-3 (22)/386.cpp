//Perfect Cubes (#386)
//Sadeq

#include<stdio.h>

#define max 200

int main()
{
	long a,b,c,d;
	long i,j,k,l;
	for(i=2;i<=max;i++)
	{
		for(j=2;j<=max;j++)
		{
			for(k=j;k<=max;k++)
			{
				for(l=k;l<=max;l++)
				{
					a=i*i*i;
					b=j*j*j;
					c=k*k*k;
					d=l*l*l;
					if(a==(b+c+d)) printf("Cube = %ld, Triple = (%ld,%ld,%ld)\n",i,j,k,l);
				}
			}
		}
	}
	return 0;
}
