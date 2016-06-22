//Bicoloring (#10004)
//Sadeq

#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;

void bfs(int node);

int d[200];
struct adj
{
	vector<int> v;
}u[200];

int main()
{
	int v,v2,a,b;
	int i,j;
	int color;
	while(scanf("%d",&v))
	{
		if(v==0) break;
		for(i=0;i<200;i++) u[i].v.clear();
		scanf("%d",&v2);
		for(i=1;i<=v2;i++)
		{
			scanf("%d %d",&a,&b);
			u[a].v.push_back(b);
			u[b].v.push_back(a);
		}
		for(j=0;j<200;j++) d[j]=-1;
		bfs(0);

		//check color
		color=1;
		for(i=0;i<v;i++)
		{
			for(j=0;j<u[i].v.size();j++)
			{
				if(d[i]==d[u[i].v[j]])
				{
					color=0;
					break;
				}
			}
			if(color==0) break;
		}

		//output
		if(color==1) printf("BICOLORABLE.\n");
		else if(color==0) printf("NOT BICOLORABLE.\n");
	}
	return 0;
}

void bfs(int node)
{
	queue<int> q;
	int next;
	int i;
	d[node]=0;
	q.push(node);
	while(!q.empty())
	{
		node=q.front();
		q.pop();
		for(i=0;i<u[node].v.size();i++)
		{
			next=u[node].v[i];
			if(d[next]==-1)
			{
				d[next]=(d[node]+1)%2;
				q.push(next);
			}
		}
	}
}
