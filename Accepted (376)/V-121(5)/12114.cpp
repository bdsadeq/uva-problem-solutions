//Bachelor Arithmetic (#12114)
//Sadeq

#include<stdio.h>

int main()
{
	long long B,S;
	long long count=0;

	while(scanf("%lld %lld",&B,&S))
	{
		if(B==0 && S==0) break;

		count++;
		printf("Case %lld: ",count);

		if(B-1==0) printf(":-\\\n");
		else if(S==B) printf(":-|\n");
		else if(B<S) printf(":-|\n");
		else if(B<S) printf(":-)\n");
		else printf(":-(\n");

	}

	return 0;
}
