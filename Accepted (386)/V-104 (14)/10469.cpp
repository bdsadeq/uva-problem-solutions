//To Carry or not to Carry (#10469)
//Sadeq

#include<stdio.h>
#include<math.h>
#define MAX 65

int main()
{
	long long a,b,res,i;
	char a_bin[MAX],b_bin[MAX],res_bin[MAX];
	while(scanf("%lld %lld",&a,&b)==2)
	{
		for(i=0;i<MAX;i++)
		{
			a_bin[i]=0;
			b_bin[i]=0;
			res_bin[i]=0;
		}

		for(i=0; ;i++)
		{
			a_bin[i]=a%2;
			a=a/2;
			if(a==0) break;
		}
		for(i=0; ;i++)
		{
			b_bin[i]=b%2;
			b=b/2;
			if(b==0) break;
		}
		for(i=0;i<MAX;i++)
		{
			if(a_bin[i]==0 && b_bin[i]==0) res_bin[i]=0;
			if(a_bin[i]==0 && b_bin[i]==1) res_bin[i]=1;
			if(a_bin[i]==1 && b_bin[i]==0) res_bin[i]=1;
			if(a_bin[i]==1 && b_bin[i]==1) res_bin[i]=0;
		}
		res=0;
		for(i=0;i<MAX;i++)
		{
			res=res+(res_bin[i]*(pow(2,i)));
		}
		printf("%lld\n",res);
	}
	return 0;
}