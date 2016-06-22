//Chess (#278)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,c;
	long m,n,ans;
	long bl,wh,i,j;
	char str[5];

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf(" %s %ld %ld",&str,&m,&n);

		if(str[0]=='r')
		{
			if(m<n) printf("%ld\n",m);
			else printf("%ld\n",n);
		}

		else if(str[0]=='Q')
		{
			if(m<n) printf("%ld\n",m);
			else printf("%ld\n",n);
		}

		else if(str[0]=='k')
		{
			bl=0;
			wh=0;
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					if((i%2==0 && j%2==0)||(i%2==1 && j%2==1)) bl++;
					else wh++;
				}
			}

			if(bl>wh) printf("%ld\n",bl);
			else printf("%ld\n",wh);
		}

		else if(str[0]=='K')
		{
			ans=((m+1)/2)*((n+1)/2);
			printf("%ld\n",ans);
		}
	}

	return 0;
}
