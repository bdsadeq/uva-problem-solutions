//Dungeon Master (#532)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<queue>
#include<vector>
using namespace std;

void bfs(long start,long dest);

long d[45000];
long p[45000];
struct adj
{
	vector<long> v;
}u[45000];
char dm[5];

int main()
{
	long tmp;
	char in[35][35][35];
	long l,r,c;
	long i,j,k;
	long s,ds;
	while(scanf("%ld %ld %ld",&l,&r,&c))
	{
		if(l==0 && r==0 && c==0) break;
		gets(dm);

		//take input
		for(i=0;i<l;i++)
		{
			for(j=0;j<r;j++)
			{
				scanf("%s",&in[i][j]);
			}
		}

		for(j=0;j<45000;j++)
		{
			d[j]=-1;
			p[j]=-1;
			u[j].v.clear();
		}

		//convert all to graph
		for(i=0;i<l;i++)
		{
			for(j=0;j<r;j++)
			{
				for(k=0;k<c;k++)
				{
					tmp=(i*35*35)+(j*35)+k;

					//start node
					if(in[i][j][k]=='S') s=tmp;

					//end node
					if(in[i][j][k]=='E') ds=tmp;

					//adjacent node
					if(in[i][j][k]=='.' || in[i][j][k]=='S' || in[i][j][k]=='E')
					{
						if(j>0 && in[i][j-1][k]!='#') u[tmp].v.push_back((i*35*35)+(j-1)*35+k);
						if(k>0 && in[i][j][k-1]!='#') u[tmp].v.push_back((i*35*35)+j*35+k-1);
						if(k<(c-1) && in[i][j][k+1]!='#') u[tmp].v.push_back((i*35*35)+j*35+k+1);
						if(j<(r-1) && in[i][j+1][k]!='#') u[tmp].v.push_back((i*35*35)+(j+1)*35+k);
						if(i>0 && in[i-1][j][k]!='#') u[tmp].v.push_back(((i-1)*35*35)+j*35+k);
						if(i<(l-1) && in[i+1][j][k]!='#') u[tmp].v.push_back(((i+1)*35*35)+j*35+k);
					}
				}
			}
		}
		bfs(s,ds);

		//test
//		printf("%ld\n",u[0].v.size());

		if(d[ds]!=-1) printf("Escaped in %ld minute(s).\n",d[ds]);
		else printf("Trapped!\n");
	}
	return 0;
}

void bfs(long start,long dest)
{
	queue<long> q;
	long node,next;
	long i;
	node=start;
	d[node]=0;
	q.push(node);
	while(!q.empty())
	{
		node=q.front();
		q.pop();
		if(node==dest) return;
		for(i=0;i<u[node].v.size();i++)
		{
			next=u[node].v[i];
			if(d[next]==-1)
			{
				d[next]=d[node]+1;
				q.push(next);
				p[next]=node;
			}
		}
	}
}
