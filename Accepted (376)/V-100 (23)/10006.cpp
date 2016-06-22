//Carmichael Numbers (#10006)
//Sadeq

#include<stdio.h>

int main()
{
	long in;

	while(scanf("%ld",&in))
	{
		if(in==0) break;

		if(in==561 || in==1105 || in==1729 || in==2465 || in==2821 || in==6601 ||
			in==8911 || in==10585 || in==15841 || in==29341 || in==41041 || in==46657 ||
			in==52633 || in==62745 || in==63973)
		{
			printf("The number %ld is a Carmichael number.\n",in);
		}
		else
		{
			printf("%ld is normal.\n",in);
		}
	}

	return 0;
}
