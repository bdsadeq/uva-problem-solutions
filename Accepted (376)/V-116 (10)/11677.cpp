//Alarm Clock (#11677)
//Sadeq

#include<stdio.h>

int main()
{
	long h1,m1,h2,m2;
	long count;

	while(scanf("%ld %ld %ld %ld",&h1,&m1,&h2,&m2))
	{
		if(h1==0 && m1==0 && h2==0 && m2==0) break;

		count=0;
		while(1)
		{
			count++;
			m1++;
			if(m1==60)
			{
				m1=0;
				h1++;
			}

			if(h1==24)
			{
				h1=0;
			}

			if(h1==h2 && m1==m2) break;
		}

		printf("%ld\n",count);
	}

	return 0;
}
