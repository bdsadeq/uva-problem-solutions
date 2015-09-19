//Eeny Meeny Moo (#440)
//Sadeq
//adhock circular

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long n;
	long m;
	int v[200];
	long i,j,k;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		m=1;
		while(1)
		{
			for(i=0;i<=n;i++)
			{
				v[i]=1;
			}

			i=1;

			for(k=n;k>1;k--)
			{
				if(i==2) break;

				v[i]=0;
				j=1;

				while(j<=m)
				{
					i++;
					if(i>n) i=1;
					if(v[i]==1) j++;
				}
			}

			if(k==1) break;
			m++;
		}

		printf("%ld\n",m);
	}
	return 0;
}
