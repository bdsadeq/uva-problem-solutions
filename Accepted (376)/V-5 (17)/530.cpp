//Binomial Showdown (#530)
//Sadeq

#include<iostream.h>

long gcd(long a,long b)
{
	if((a%b)==0) return b;
	else return gcd(b,a%b);
}

void dgcd(long &a,long &b)
{
	long g=gcd(a,b);
	a=a/g;
	b=b/g;
}

int main()
{
	long n,k,num,den,i,tm,td;
	while((cin>>n>>k)!=0)
	{
		if((n==0) && (k==0)) break;
		num=1;
		den=1;
		if(k>n/2) k=n-k;
		for(i=k;i;i--)
		{
			tm=n-k+i;
			td=i;
			dgcd(tm,td);
			dgcd(num,td);
			dgcd(tm,den);
			num=num*tm;
			den=den*td;
		}
		cout<<num/den<<endl;
	}
	return 0;
}