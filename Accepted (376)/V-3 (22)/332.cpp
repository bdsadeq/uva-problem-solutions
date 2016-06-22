//Rational numbers from repeating fractions (#332)
//Sadeq

#include<stdio.h>
#include<math.h>
#include<string.h>

int reduced_fraction(long &nom,long &denom);
long gcd(long a,long b);

int main()
{
	long j,k,nm,dn,frac,temp;
	int cas=0,len,a,b,dum;
	char in[15];
	while(scanf("%ld",&j))
	{
		if(j<0) break;
		scanf("%d.%s",&dum,&in);
		len=strlen(in);

		//convert fraction to decimal
		frac=0;
		b=len-1;
		for(a=0;a<len;a++)
		{
			temp=in[a]-'0';
			frac=frac+temp*pow(10,b);
			b--;
		}

		//calculate numarator and denomenator
		k=len-j;
		if(j==0)
		{
			nm=frac;
			dn=pow(10,len);
		}
		else
		{
			nm=((pow(10,k+j)*frac)-(pow(10,k)*frac))/(pow(10,len));
			nm++;
			dn=pow(10,k+j)-pow(10,k);
		}

		//call reduce function
		reduced_fraction(nm,dn);

		//output
		cas++;
		printf("Case %d: %ld%c%ld\n",cas,nm,'/',dn);
	}
	return 0;
}

int reduced_fraction(long &nom,long &denom)
{
	long g;
	g = gcd(nom,denom);
	nom/=g;
	denom/=g;
	return 0;
}

long gcd(long a,long b)
{
	if (a%b==0) return b;
	else return gcd(b,a%b);
}
