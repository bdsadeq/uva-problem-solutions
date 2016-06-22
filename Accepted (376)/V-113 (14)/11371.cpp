//Number theory for newbies (#11371)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long long value(char ch[],long long a);

int main()
{
	char max[15],min[15],in[15],temp;
	long long len,i,val1,val2,a,b;

	while(scanf("%s",&in)==1)
	{
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			max[i]=in[i];
			min[i]=in[i];
		}
		
		//maximum and minimum value
		for(a=0;a<len-1;a++)
		{
			for(b=a+1;b<len;b++)
			{
				if(max[a]<max[b])
				{
					temp=max[a];
					max[a]=max[b];
					max[b]=temp;
				}

				if(min[a]>min[b])
				{
					temp=min[a];
					min[a]=min[b];
					min[b]=temp;
				}
			}
		}

		//test leading zero for minimum
		if(min[0]=='0')
		{
			for(i=0;i<len;i++)
			{
				if(min[i]!='0')
				{
					min[0]=min[i];
					min[i]='0';
					break;
				}
			}
		}

		//calculate value
		val1=value(max,len);
		val2=value(min,len);

		//output
		printf("%lld - %lld = %lld = 9 * %lld\n",val1,val2,val1-val2,(val1-val2)/9);
	}
	return 0;
}

long long value(char ch[],long long a)
{
	int i,pw;
	long long val=0;
	pw=a;
	for(i=0;i<a;i++)
	{
		pw--;
		val=val+(ch[i]-'0')*pow(10,pw);
	}
	return val;
}
