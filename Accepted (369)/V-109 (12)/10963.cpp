//The Swallowing Ground (#10963)
//Sadeq

#include<stdio.h>
#include<vector>
#include<stdlib.h>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	vector<long> v;
	long cas,c;
	long n,i,a,b;
	long ans;

	scanf("%ld",&cas);

	for(c=1;c<=cas;c++)
	{
		v.clear();

		scanf("%ld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld %ld",&a,&b);
			v.push_back(abs(b-a));
		}

		//process
		ans=1;
		for(i=1;i<v.size();i++)
		{
			if(v[i-1]!=v[i])
			{
				ans=0;
				break;
			}
		}

		if(c>1) printf("\n");
		if(ans==1) printf("yes\n");
		else if(ans==0) printf("no\n");
	}
