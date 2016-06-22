//Linear Cellular Automata (#457)
//sadeq

#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

char D[] = " .xW";
vector<long>v;


void automata() {
	long explo[2][50], i, part1 = 0, part2 = 1, j, k;

	for(i=0;i<50;i++)
	{
		explo[0][i]=0;
		explo[1][i]=0;
	}

	explo[0][19] = 1;

	for(j=0;j<50;j++) {
		part1=j%2;
		part2=(j+1)%2;

		for(i = 0; i<40; i++)
		{
			printf("%c",D[explo[part1][i]]);
		}

		printf("\n");

		for(i = 1; i<39; i++) {
			k = explo[part1][i-1] + explo[part1][i] + explo[part1][i+1];
			explo[part2][i] = v[k];
		}

		explo[part2][0] = v[explo[part1][0] + explo[part1][1]];
		explo[part2][39] = v[explo[part1][39] + explo[part1][38]];


	}
}

int main() {
	//freopen("in.txt","r",stdin);

	long cas, n = 0, m,c;
	scanf("%ld",&cas);
	for(c=1;c<=cas;c++){
		if(c>1)
		{
			printf("\n");
		}
		v.clear();

		for(n=0;n<10;n++){
			scanf("%ld",&m);
			v.push_back(m);
		}

		automata();

	}

	return 0;
}
