//Da Vinci Code (#11385)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long long cas,c;
	long long fib[50],infib[200];
	char in[200],intemp[200],out[200],dm[5];
	long long i,j,num,len,max;

	//create all fib
	fib[0]=1;
	fib[1]=1;
	for(i=2;i<=50;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}

	scanf("%lld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld",&num);
		for(i=0;i<num;i++)
		{
			scanf("%lld",&infib[i]);
		}

		//fill output with space
		for(i=0;i<200;i++)
		{
			out[i]=' ';
		}

		gets(dm);
		gets(in);
		len=strlen(in);
		//take anly character
		j=0;
		for(i=0;i<len;i++)
		{
			if(isupper(in[i]))
			{
				intemp[j]=in[i];
				j++;
			}
		}

		//search proper fib
		max=0;
		for(i=0;i<num;i++)
		{
			for(j=1;j<=50;j++)
			{
				if(infib[i]==fib[j])
				{
					out[j-1]=intemp[i];
					if(j>max) max=j;
					break;
				}
			}
		}

		//output
		for(i=0;i<max;i++)
		{
			printf("%c",out[i]);
		}
		printf("\n");
	}

	return 0;
}
