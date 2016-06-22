//All You Need Is Love (#10193)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long gcd(long a,long b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}

int main()
{
	long i,j,cas,num1,num2,len1,len2,res,temp;
	char a[64],b[64];
	scanf("%ld",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%s\n%s",&a,&b);
		len1=strlen(a);
		len2=strlen(b);
		num1=0;
		num2=0;
		temp=len1;
		for(j=0;j<len1;j++)
		{
			temp--;
			num1=num1+(a[j]-'0')*(pow(2,temp));
		}
		temp=len2;
		for(j=0;j<len2;j++)
		{
			temp--;
			num2=num2+(b[j]-'0')*(pow(2,temp));
		}
		res=gcd(num1,num2);
		if(res>1) printf("Pair #%ld: All you need is love!\n",i);
		else printf("Pair #%ld: Love is not all you need!\n",i);
	}
	return 0;
}