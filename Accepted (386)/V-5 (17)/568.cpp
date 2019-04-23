//Just the Facts (#568)
//Sadeq

#include<stdio.h>

int main()
{
	long list[10001],i,in,temp;

	//create list
	list[1]=1;
	for(i=2;i<=10000;i++)
	{
		temp=list[i-1]*i;

		while(temp%10==0)
		{
			temp=temp/10;
		}

		temp=temp%100000;

		list[i]=temp;
	}

	//input & output
	while(scanf("%ld",&in)==1)
	{
		list[in]=list[in]%10;
		printf("%5ld -> %ld\n",in,list[in]);
	}

	return 0;
}
