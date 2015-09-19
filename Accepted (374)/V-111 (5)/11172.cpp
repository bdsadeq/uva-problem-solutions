//Relational operators (#11172)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,i;
	long a,b;
	scanf("%ld",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%ld %ld",&a,&b);
		if(a<b) printf("<\n");
		else if(a>b) printf(">\n");
		else printf("=\n");
	}
	return 0;
}