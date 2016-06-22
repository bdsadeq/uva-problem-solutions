//Complex, difficult and complicated (#11042)
//Sadeq
//aita bair korte amar jan bair hoiya gese :)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	long a,b;
	long cas,c;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld %ld",&a,&b);

		a=abs(a);
		b=abs(b);

		if(b==0) printf("1\n");
		else if(a==0) printf("2\n");
		else if(a==b) printf("4\n");
		else printf("TOO COMPLICATED\n");
	}

	return 0;
}
