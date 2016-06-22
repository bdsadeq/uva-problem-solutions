//Prime frequency (#10789)
//Sadeq

#include<stdio.h>
#include<string.h>

bool prime(int n);

int main()
{
	int cas,z;
	int a[200],len,found,pri,i;
	char dm[5];
	char in[2100];


	scanf("%d",&cas);
	gets(dm);
	for(z=1;z<=cas;z++)
	{
		gets(in);
		len=strlen(in);

		//create a array of sequence
		for(i=0;i<200;i++) a[i]=0;
		for(i=0;i<len;i++)
		{
			a[in[i]]++;
		}

		//output
		printf("Case %d: ",z);
		found=0;
		for(i=0;i<200;i++)
		{
			pri=prime(a[i]);
			if(pri==1)
			{
				found=1;
				printf("%c",i);
			}
		}
		if(found==0) printf("empty");
		printf("\n");
	}
	return 0;
}

bool prime(int n)
{
	int i;
	if(n==0 || n==1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}