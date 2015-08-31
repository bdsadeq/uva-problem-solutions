//Barbarian tribes (#10771)
//Sadeq

#include<stdio.h>

int main()
{
	long k,m,n;
	while(scanf("%ld %ld %ld",&k,&m,&n))
	{
		if(k==0 && m==0 && n==0) break;
		//help from s.halim's website
		if(m%2==0) printf("Gared\n");
		else printf("Keka\n");
	}
	return 0;
}