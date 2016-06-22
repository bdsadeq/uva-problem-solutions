//Combinations (#369)
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
	long n,m,num,den,i,tm,td;
	long orgm,orgn;
	while((cin>>n>>m)!=0)
	{
		if((n==0) && (m==0)) break;
		orgm=m;
		orgn=n;
		num=1;
		den=1;
		if(m>n/2) m=n-m;
		for(i=m;i;i--)
		{
			tm=n-m+i;
			td=i;
			dgcd(tm,td);
			dgcd(num,td);
			dgcd(tm,den);
			num=num*tm;
			den=den*td;
		}
		cout<<orgn<<" things taken "<<orgm<<" at a time is "<<num/den<<" exactly."<<endl;
	}
	return 0;
}