//The Coco-Cola Store (#11877)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long n;
	long count;

	while(scanf("%ld",&n))
	{
		if(n==0) break;
		count=0;
		n++;

		while(1)
		{
			n=n-3;
			count++;
			n++;
			if(n<3) break;
		}

		printf("%ld\n",count);
	}

	return 0;
}