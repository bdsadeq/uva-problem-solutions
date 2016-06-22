//Searching for Nessy (#11044)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,c;
	long n,m,res;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld %ld",&n,&m);

		res=(n/3)*(m/3);

		printf("%ld\n",res);
	}
	return 0;
}
