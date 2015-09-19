//Vertex (#280)
//Sadeq

#include<stdio.h>
#include<vector>
using namespace std;

#define white 0
#define gray 1
#define black 2

void visit(int node);

struct adj
{
	vector<int> v;
}u[110];

int color[110];

int main()
{
	int vrt;
	int rt,temp;

	int num;
	int i,j;
	int count;

	//take input
	while(scanf("%d",&vrt))
	{
		if(vrt==0) break;

		for(i=0;i<110;i++) u[i].v.clear();

		while(scanf("%d",&rt))
		{
			//take root node
			if(rt==0) break;
			
			//take adj node
			while(1)
			{
				scanf("%d",&temp);
				if(temp==0) break;
				u[rt].v.push_back(temp);
			}
		}

		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			scanf("%d",&temp);
			memset(color,white,sizeof(color));
			visit(temp);

			//how many white
			count=0;
			for(j=1;j<=vrt;j++)
			{
				if(color[j]!=black) count++;
			}
			printf("%d",count);
			//output nodes
			for(j=1;j<=vrt;j++)
			{
				if(color[j]!=black) printf(" %d",j);
			}
			printf("\n");
		}
	}
	return 0;
}

void visit(int node)
{
	int i,next;
	color[node]=gray;
	for(i=0;i<u[node].v.size();i++)
	{
		next=u[node].v[i];
		if(color[next]==white) visit(next);
		color[next]=black;
	}
//	color[node]=black;
}

