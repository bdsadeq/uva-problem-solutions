//All Roads Lead Where? (#10009)
//Sadeq

#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;

void bfs(int start,int dest);
void print_path(int node);
void read_input();

int d[100];
int p[100];
struct adj
{
	vector<int> v;
}u[100];

int main()
{
	int cas,c,line=0;
	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		if(line==1) printf("\n");
		line=1;
		read_input();

	}
	return 0;
}

void bfs(int start,int dest)
{
	queue<int> q;
	int node,next;
	int i;
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

void print_path(int node)
{
	if(p[node]==-1) return;
	print_path(p[node]);
	printf("%c",node+'A');
}

void read_input()
{
	char dm[5];
	int v,qr,a,b;
	int s,ds;
	int i,j;
	char in1[100],in2[100];
	scanf("%d %d",&v,&qr);
	gets(dm);
	for(i=0;i<100;i++) u[i].v.clear();
	for(i=1;i<=v;i++)
	{
		scanf(" %s %s",&in1,&in2);
		a=in1[0]-'A';
		b=in2[0]-'A';
		u[a].v.push_back(b);
		u[b].v.push_back(a);
	}
	for(i=1;i<=qr;i++)
	{
		for(j=0;j<100;j++)
		{
			d[j]=-1;
			p[j]=-1;
		}
		scanf(" %s %s",&in1,&in2);
		s=in1[0]-'A';
		ds=in2[0]-'A';
		bfs(s,ds);
		printf("%c",s+'A');
		print_path(ds);
		printf("\n");
	}
}
