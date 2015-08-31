//MODEX (#1230)
//Sadeq

#include<iostream>
using namespace std;

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
	long cas,cc;
	long b,p,m;
	
	cin>>cas;

	for(cc=1;cc<=cas;cc++)
	{
		cin>>b>>p>>m;
		cout<<mod(b,p,m)<<endl;
	}
	return 0;
}
