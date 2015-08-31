//Throwing cards away I (#10935)
//Sadeq
//data structure-> Queue

#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	queue<long> Q;
	long num;
	long sz,i;
	long fr,temp,first;

	while(scanf("%ld",&num))
	{
		if(num==0) break;

		//clear the queue
		sz=Q.size();
		for(i=0;i<sz;i++) Q.pop();

		//fill all numbers
		for(i=0;i<num;i++)
		{
			Q.push(i+1);
		}

		//process operation
		first=0;
		printf("Discarded cards:");
		while(1)
		{
			sz=Q.size();
			if(sz==1) break;
			if(first==1) printf(",");
			fr=Q.front();
			printf(" %ld",fr);
			Q.pop();

			temp=Q.front();
			Q.pop();
			Q.push(temp);
			first=1;
		}
		printf("\n");
		printf("Remaining card: %ld\n",Q.front());
	}

	return 0;
}
