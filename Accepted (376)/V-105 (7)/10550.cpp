//Combination Lock (#10550)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long a,b,c,d;
	long degree;

	while(scanf("%ld %ld %ld %ld",&a,&b,&c,&d))
	{
		if(a==0 && b==0 && c==0 && d==0) break;

		degree=360+360;

		if(a>b)
		{
			degree=degree+((a-b)*9);
		}
		else
		{
			degree=degree+((40+a-b)*9);
		}

		degree=degree+360;

		if(c>b)
		{
			degree=degree+((c-b)*9);
		}
		else
		{
			degree=degree+((40+c-b)*9);
		}

		
		if(c>d)
		{
			degree=degree+((c-d)*9);
		}
		else
		{
			degree=degree+((40+c-d)*9);
		}


		printf("%ld\n",degree);

	}


	return 0;
}
