//Image Coding (#11588)
//Sadeq
//Simple adhoc

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long r,c,m,n;
	long max,i,j,sum;
	long cas,cc;
	long val[26];
	char in[25][25],dm[5];

	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		//take input
		scanf("%ld %ld %ld %ld",&r,&c,&m,&n);
		
		gets(dm);
		for(i=0;i<r;i++)
		{
			gets(in[i]);
		}

		//set all to zero
		for(i=0;i<26;i++) val[i]=0;

		max=0;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				val[in[i][j]-'A']++;

				//find max;
				if(val[in[i][j]-'A']>max) max=val[in[i][j]-'A'];
			}
		}

		//calculate the value
		sum=0;
		for(i=0;i<26;i++)
		{
			if(val[i]==max) sum=sum+val[i]*m;
			else sum=sum+val[i]*n;
		}

		printf("Case %ld: %ld\n",cc,sum);
	}

	return 0;
}
