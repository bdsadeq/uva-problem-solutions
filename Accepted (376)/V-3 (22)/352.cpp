//The Seasonal War (#352)
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
}u[2600];

int color[2600];

int main()
{
	//freopen("in.txt","r",stdin);

	long num,eagle,cas=0;
	long i,j;
	char in[30][30],dm[5];

	while(scanf("%ld",&num)==1)
	{
		gets(dm);

		for(i=0;i<num;i++)
		{
			gets(in[i]);
		}

		//clear all
		for(i=0;i<2600;i++) u[i].v.clear();
		memset(color,white,sizeof(color));

		//create link list
		for(i=0;i<num;i++)
		{
			for(j=0;j<num;j++)
			{
				if(in[i][j]=='1')
				{
					if(i>0 && in[i-1][j]=='1')
					{
						u[i*100+j].v.push_back((i-1)*100+j);
					}

					if(i>0 && j>0 && in[i-1][j-1]=='1')
					{
						u[i*100+j].v.push_back((i-1)*100+j-1);
					}

					if(i>0 && j<num-1 && in[i-1][j+1]=='1')
					{
						u[i*100+j].v.push_back((i-1)*100+j+1);
					}

					if(j>0 && in[i][j-1]=='1')
					{
						u[i*100+j].v.push_back(i*100+j-1);
					}

					if(j<num-1 && in[i][j+1]=='1')
					{
						u[i*100+j].v.push_back(i*100+j+1);
					}

					if(i<num-1 && j>0 && in[i+1][j-1]=='1')
					{
						u[i*100+j].v.push_back((i+1)*100+j-1);
					}

					if(i<num-1 && in[i+1][j]=='1')
					{
						u[i*100+j].v.push_back((i+1)*100+j);
					}

					if(i<num-1 && j<num-1 && in[i+1][j+1]=='1')
					{
						u[i*100+j].v.push_back((i+1)*100+j+1);
					}

					u[i*100+j].v.push_back(i*100+j);
				}
			}
		}
		
		eagle=0;
		for(i=0;i<2600;i++)
		{
			if(u[i].v.size()!=0 && color[i]==white)
			{
				visit(i);
				eagle++;
			}
		}

		cas++;
		printf("Image number %ld contains %ld war eagles.\n",cas,eagle);
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
