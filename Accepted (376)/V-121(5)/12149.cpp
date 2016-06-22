//Feynman (#12149)
//Sadeq

#include<stdio.h>

long feynman(long N)
{
	return (N*(N+1)*(2*N+1))/6;
}

int main()
{
	long N;

	while(scanf("%ld",&N))
	{
		if(N==0) break;
		printf("%ld\n",feynman(N));
	}


	return 0;
}
