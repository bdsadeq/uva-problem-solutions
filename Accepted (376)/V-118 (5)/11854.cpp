//Egypt (#11854)
//Sadeq

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	long a,b,c;

	vector<long> V;

	while(1)
	{
		scanf("%ld %ld %ld",&a,&b,&c);

		if(a==0 && b==0 && c==0) break;

		V.clear();
		V.push_back(a);
		V.push_back(b);
		V.push_back(c);

		sort(V.begin(),V.end());

		//printf("%ld %ld %ld\n",V[0],V[1],V[2]);
		if((V[0]*V[0]+V[1]*V[1])==V[2]*V[2])
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}

	return 0;
}
