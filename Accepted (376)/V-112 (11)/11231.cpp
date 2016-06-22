//Black and white painting (#11231)
//Sadeq

#include<stdio.h>

int main()
{
	long n,m,c;
	long size;

	while(scanf("%ld %ld %ld",&n,&m,&c))
	{
		if(n==0 && m==0 && c==0) break;

		size=(n-7)*(m-7);

		if((size%2)==1 && c==1) size++;
		else if((size%2)==1) size--;

		size=size/2;
		printf("%ld\n",size);
	}

	return 0;
}
