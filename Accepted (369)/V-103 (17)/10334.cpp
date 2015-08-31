//Ray Through Glasses (#10334)
//Sadeq

#include<iostream.h>
#include<string.h>

int main()
{
	char *fib[5001]={0};
	fib[0]="1";
	fib[1]="2";
	int l1=strlen(fib[0]);
	int l2=strlen(fib[1]);
	int l;
	for(long i=2;i<=5000;i++)
	{
		char str[10000];
		if(l1>=l2) l=l1;
		else l=l2;
		int ca=0;
		long j,k,m,p;
		for(j=l1-1,k=l2-1,m=0,p=0;p<l;j--,k--,m++,p++)
		{
			int s1;
			if(j<0) fib[i-2][j]='0';
			s1=fib[i-2][j]-48;
			int s2;
			if(k<0) fib[i-1][k]='0';
			s2=fib[i-1][k]-48;
			int ans=0;
			ans=ans+s1+s2+ca;
			if(ans>9)
			{
				str[m]=(ans-10)+48;
				ca=1;
			}
			else
			{
				str[m]=ans+48;
				ca=0;
			}
		}
		if(ca>0)
		{
			str[m]=ca+48;
			m++;
		}
		str[m]='\0';
		fib[i]=new char[m+1];
		long y=0;
		for(long x=m-1;x>=0;x--,y++)
		{
			fib[i][y]=str[x];
		}
		fib[i][y]='\0';
		l1=strlen(fib[i-1]);
		l2=strlen(fib[i]);
	}
	int in;
	while((cin>>in)!=0)
	{
		cout<<fib[in]<<endl;
	}
	return 0;
}