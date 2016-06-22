//Factorial frequencies (#324)
//Sadeq

#include<stdio.h>
#include<string.h>

char f[10000];
char factorial[1010][10000];

int multiply(int k)
{
	int cin,sum,i;
	int len=strlen(f);
	cin=0;
	i=0;
	while(i<len)
	{
		sum=cin+(f[i]-'0')*k;
		f[i]=(sum%10)+'0';
		i++;
		cin=sum/10;
	}
	while(cin>0)
	{
		f[i++]=(cin%10)+'0';
		cin=cin/10;
	}
	f[i]='\0';
	for(int j=0;j<i;j++)
	{
		factorial[k][j]=f[j];
	}
	factorial[k][i]='\0';
	return 0;
}

int fac()
{
	int k;
	strcpy(f,"1");
	for(k=2;k<=1000;k++)
	{
		multiply(k);
	}
	return 0;
}

int main()
{
	int n;
	int len;
	int i,j;
	int num[10];
	factorial[0][0]='1';
	factorial[1][0]='1';

	//create all factorial
	fac();
	while(scanf("%d",&n))
	{
		if(n==0) break;
		len=strlen(factorial[n]);

		//initialize all to zero
		for(i=0;i<10;i++) num[i]=0;

		//count the frequencies
		for(i=0;i<len;i++)
		{
			for(j=0;j<10;j++)
			{
				if(factorial[n][i]==(j+'0')) num[j]++;
			}
		}

		//output
		printf("%d! --\n",n);
		printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",num[0],num[1],num[2],num[3],num[4]);
		printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",num[5],num[6],num[7],num[8],num[9]);
	}
	return 0;
}
