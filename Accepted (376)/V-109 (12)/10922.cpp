//2 the 9's (#10922)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[2000];
	long len,i;
	long sum,deg,sum_dig;
	long temp,r;
	while(scanf("%s",&in))
	{
		len=strlen(in);
		if(len==1 && in[0]=='0') break;
		sum=0;
		//test multiple of 9
		for(i=0;i<len;i++)
		{
			sum=sum+(in[i]-'0');
		}
		deg=1;
		temp=sum;
		//find the degree
		if(sum%9==0)
		{
			while(1)
			{
				sum_dig=0;
				while(1)
				{
					r=temp%10;
					sum_dig=sum_dig+r;
					temp=temp/10;
					if(temp==0) break;
				}
				deg++;
				if(sum_dig==9) break;
				else temp=sum_dig;
			}
		}
		if(sum%9==0 && len==1) printf("%s is a multiple of 9 and has 9-degree 1.\n",in);
		else if(sum%9==0) printf("%s is a multiple of 9 and has 9-degree %ld.\n",in,deg);
		else printf("%s is not a multiple of 9.\n",in);
	}
	return 0;
}