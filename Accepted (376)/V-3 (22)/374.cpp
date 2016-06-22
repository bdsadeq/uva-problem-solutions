//Big Mod (#374)
//Sadeq

#include<iostream.h>

long square(long x)
{
	return x*x;
}

long mod(long b,long p,long m)
{
	if(p==0) return 1;
	else if((p%2)==0) return square(mod(b,p/2,m))%m;
	else return (b%m)*mod(b,p-1,m)%m;
}

int main()
{
	long b,p,m;
	while((cin>>b>>p>>m)!=0)
	{
		cout<<mod(b,p,m)<<endl;
	}
	return 0;
}