//DELIVERY DEBACLE (#11310)
//Sadeq

#include<stdio.h>

int main()
{
	int cas,c;
	int in,i;
	long long res[41];

	res[0]=1;
	res[1]=1;
	res[2]=5;

	for(i=3;i<41;i++)
	{
		res[i]=(4*res[i-2])+(2*res[i-3])+res[i-1];
	}

	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%d",&in);
		printf("%lld\n",res[in]);
	}
	return 0;
}
