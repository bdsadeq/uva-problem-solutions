//Debugging RAM (#11736)
//Sadeq

#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

long i,j,k,L,size,b,v;

int main()
{
	//freopen("in.txt","r",stdin);

	vector<long> vec[1000];
	char nm[1000][30], dm[5],bits[1000];
	unsigned long long dec,temp[1000];

	while(scanf("%ld %ld",&b,&v)==2)
	{
		long long nameval[300];

		for(i=0;i<1000;i++)
		{
			vec[i].clear();
		}

		for(i=0;i<v;i++)
		{
			scanf(" %s %lld",&nm[i],&temp[i]);
		}

		gets(dm);

		for(j=0;j<v;j++)
		{
			for(i=0;i<temp[j];i++)
			{
				gets(bits);

				for(k=0;k<b;k++)
				{
					vec[j].push_back(bits[k]-'0');
				}
			}

			dec=0;

			size=vec[j].size();

			for(k=size-1,L=0;k>=0;k--,L++)
			{
				dec=dec+(unsigned long long)(vec[j][k]*(pow(2,(double)L)));
			}

			nameval[j]=dec;
		}

		long cas,c;

		char in[2000];
		scanf("%ld",&cas);
		gets(dm);

		for(c=1;c<=cas;c++)
		{
			gets(in);
			int found=0;

			for(i=0;i<v;i++)
			{
				if(strcmp(in,nm[i])==0)
				{
					found=1;
					printf("%s=%llu\n",in,nameval[i]);
				}
			}
			if(found==0) printf("%s=\n",in);
		}
	}

	return 0;
}
