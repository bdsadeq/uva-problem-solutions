//f91 (#10696)
//Sadeq

#include<stdio.h>

int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		if(n<=100) printf("f91(%d) = 91\n",n);
		else printf("f91(%d) = %d\n",n,n-10);
	}
	return 0;
}