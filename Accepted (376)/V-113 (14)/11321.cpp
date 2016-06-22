//Sort! Sort!! And Sort!!! (#11321)
//Sadeq

#include <stdio.h>
#include <algorithm>
using namespace std;

bool isBool(int a, int b);
int n, m;

int main() {
	//freopen("in.txt","r",stdin);
	int numbers[10100];
	int i;

	while(scanf("%d %d",&n,&m)==2) 
	{
		printf("%d %d\n",n,m);
		for(i = 0; i < n; i++)
		{
			scanf("%d",&numbers[i]);
		}
		sort(numbers, numbers + n, isBool);
		for(i = 0; i < n; i++)
		{
			printf("%d\n",numbers[i]);
		}
	}

	return 0;
}

bool isBool(int a, int b) 
{
	int x=a%m;
	int y=b%m;
	int u,v;
	if (x == y) {
		u=a%2;
		v=b%2;
		if (u == 0 && v == 0) 
		{
			if(a<b) return true;
			else return false;
		} 
		else if (u != 0 && v != 0) 
		{
			if(a>b) return true;
			else return false;
		} 
		else if (u == 0 && v != 0) 
		{
			return false;
		} 
		else if (u != 0 && v == 0) 
		{
			return true;
		}
	}

	if(x<y)
	{
		return true;
	}
	else
	{
		return false;
	}
}