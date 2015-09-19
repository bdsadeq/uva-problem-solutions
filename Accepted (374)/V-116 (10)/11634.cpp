//Generate random numbers (#11634)
//Sadeq

#include<stdio.h>
#include<map>
using namespace std;

int main()
{
	map <long, bool> m;

	long in;
	long count;

	while(scanf("%ld",&in))
	{
		if(in==0) break;
		m.clear();

		m[in]=1;

		count=1;
		while(1)
		{
			in=in*in;
			in=in/100;
			in=in%10000;
			if(m[in]) break;
			m[in]=1;
			count++;
		}

		printf("%ld\n",count);
	}

	return 0;
}
