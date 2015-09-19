//Oil Deposits (#572)
//Sadeq
//DFS component counting

#include<stdio.h>
#include<vector>
using namespace std;

#define white 0
#define gray 1
#define black 2

void visit(long node);

struct adj
{
	vector<long> v;
}u[11000];

int color[11000];

int main()
{
	//freopen("in.txt","r",stdin);

	long m,n,tree;
	long i,j;
	char in[110][110],dm[5];

	while(scanf("%ld %ld",&m,&n))
	{
		if(m==0 && n==0) break;
		gets(dm);

		for(i=0;i<m;i++)
		{
			gets(in[i]);
		}

		//clear all
		for(i=0;i<11000;i++) u[i].v.clear();
		memset(color,white,sizeof(color));

		//create link list
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(in[i][j]=='@')
				{
					if(i>0 && in[i-1][j]=='@')
					{
						u[i*100+j].v.push_back((i-1)*100+j);
					}

					if(i>0 && j>0 && in[i-1][j-1]=='@')
					{
						u[i*100+j].v.push_back((i-1)*100+j-1);
					}

					if(i>0 && j<n-1 && in[i-1][j+1]=='@')
					{
						u[i*100+j].v.push_back((i-1)*100+j+1);
					}

					if(j>0 && in[i][j-1]=='@')
					{
						u[i*100+j].v.push_back(i*100+j-1);
					}

					if(j<n-1 && in[i][j+1]=='@')
					{
						u[i*100+j].v.push_back(i*100+j+1);
					}

					if(i<m-1 && j>0 && in[i+1][j-1]=='@')
					{
						u[i*100+j].v.push_back((i+1)*100+j-1);
					}

					if(i<m-1 && in[i+1][j]=='@')
					{
						u[i*100+j].v.push_back((i+1)*100+j);
					}

					if(i<m-1 && j<n-1 && in[i+1][j+1]=='@')
					{
						u[i*100+j].v.push_back((i+1)*100+j+1);
					}

					u[i*100+j].v.push_back(i*100+j);
				}
			}
		}
		
		tree=0;
		for(i=0;i<11000;i++)
		{
			if(u[i].v.size()!=0 && color[i]==white)
			{
				visit(i);
				tree++;
			}
		}

		printf("%ld\n",tree);
	}
	return 0;
}

void visit(long node)
{
	long i,next;
	color[node]=gray;
	for(i=0;i<u[node].v.size();i++)
	{
		next=u[node].v[i];
		if(color[next]==white) visit(next);
	}
	color[node]=black;
}
