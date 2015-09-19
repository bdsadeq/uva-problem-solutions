//Tree's a Crowd #152
//Sadeq
//algorithm : help from net :(

#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

struct tree
{
	long x,y,z;
};

bool sortThem(const tree &a, const tree &b) {
	return a.x < b.x;
}



int main()
{
	//freopen("in.txt","r",stdin);

	tree trees;

	long i,j,len=0,k;
	long ans[20];
	long temp;
	long highest;
	double distance;

	vector<tree> list;

	for(i=0;i<20;i++)
	{
		ans[i]=0;
	}

	while(1)
	{
		scanf("%ld %ld %ld",&trees.x,&trees.y,&trees.z);

		if(trees.x==0 && trees.y==0 && trees.z==0)
		{
			break;
		}

		list.push_back(trees);
	}

	//sort
	sort(list.begin(), list.end(), sortThem);

	long size=list.size();

	for (i=0;i<size; i++) {
		highest = 10;

		for (j= i-1; j>=0; j--) {
			if (abs(list[i].x - list[j].x) >= highest)
				break;

			distance = sqrt(pow(list[i].x - list[j].x, 2.0) + pow(list[i].y - list[j].y, 2.0) + pow(list[i].z - list[j].z, 2.0));
			temp = distance;

			if (temp < highest)
				highest = temp;
		}

		// right side
		for (int j = i + 1; j < size; j++) {
			if (abs(list[i].x - list[j].x) >= highest)
				break;

			distance = sqrt( pow(list[i].x - list[j].x, 2.0) + pow(list[i].y - list[j].y, 2.0) + pow(list[i].z - list[j].z, 2.0));
			temp = distance;

			if (temp < highest)
				highest = temp;
		}

		if (highest < 10)
			ans[highest]++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%4i", ans[i]);
	}
	printf("\n");

	return 0;

}
