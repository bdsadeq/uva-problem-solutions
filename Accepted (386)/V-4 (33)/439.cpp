//Knight Moves (#439)
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
	char in1[5],in2[5];
	int a,b;
	int i,j,tmp;

	//convert the knight movement to graph
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			tmp=(i*10)+j;			
			if(i>2 && j>1) u[tmp].v.push_back((i-2)*10+j-1);
			if(i>2 && j<8) u[tmp].v.push_back((i-2)*10+j+1);

			if(i>1 && j>2) u[tmp].v.push_back((i-1)*10+j-2);
			if(i>1 && j<7) u[tmp].v.push_back((i-1)*10+j+2);

			if(i<8 && j>2) u[tmp].v.push_back((i+1)*10+j-2);
			if(i<8 && j<7) u[tmp].v.push_back((i+1)*10+j+2);

			if(i<7 && j>1) u[tmp].v.push_back((i+2)*10+j-1);
			if(i<7 && j<8) u[tmp].v.push_back((i+2)*10+j+1);
		}
	}

	//take input
	while(scanf(" %s %s",&in1,&in2)==2)
	{
		for(j=0;j<100;j++)
		{
			d[j]=-1;
			p[j]=-1;
		}

		a=(in1[0]-'a'+1)*10+in1[1]-'0';
		b=(in2[0]-'a'+1)*10+in2[1]-'0';
	
		bfs(a,b);
		printf("To get from %s to %s takes %d knight moves.\n",in1,in2,d[b]);
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
