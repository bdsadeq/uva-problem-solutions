//Let Me Count The Ways (#357)
//Sadeq

#include<stdio.h>
#include<algorithm>
using namespace std;

long long nway[30001];
int coin[5]={50,25,10,5,1};

int main()
{
	long i,j,n,c;

	//creat list
	fill(nway,nway+30001,0);
	nway[0]=1;
	for(i=0;i<5;i++)
	{
		c=coin[i];
		for(j=coin[i];j<=30000;j++)
		{
			nway[j]=nway[j]+nway[j-c];
		}
	}

	while(scanf("%ld",&n)==1)
	{
		if(nway[n]==1) printf("There is only 1 way to produce %ld cents change.\n",n);
		else printf("There are %lld ways to produce %ld cents change.\n",nway[n],n);
	}
	return 0;
}
