//Rock-Paper-Scissors Tournament (#10903)
//sadeq

#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

long getTotalGame(long N,long K);
long calculateGame(long p1,long p2);

char name[5][20];
vector<long> players[110];

int main()
{
	//freopen("in.txt","r",stdin);

	long N,K;
	long size;

	long totalGame;
	long i,j,win,lose;
	long p1,p2;
	long temp;
	long line=0;

	while(scanf("%ld",&N))
	{
		if(N==0) break;
		scanf("%ld",&K);

		if(line==1) printf("\n");
		line=1;

		for(i=0;i<110;i++)
		{
			players[i].clear();
		}
		

		totalGame=getTotalGame(N,K);

		for(i=0;i<totalGame;i++)
		{
			scanf("%ld %s %ld %s",&p1,&name[1],&p2,&name[2]);

			//calculate value;
			calculateGame(p1,p2);
		}

		//output
		for(i=1;i<=N;i++)
		{
			size=players[i].size();
			win=0;
			lose=0;

			for(j=0;j<size;j++)
			{
				if(players[i][j]==1) win++;
				if(players[i][j]==0) lose++;
			}

			if(size==0)
			{
				printf("-\n");
			}
			else
			{
				printf("%.3lf\n",(double)win/(double)(win+lose));
			}

		}


	}


	return 0;
}

long getTotalGame(long N,long K)
{
	//k*n*(n-1)/2
	return (K*N*(N-1))/2;

}

long calculateGame(long p1,long p2)
{
	if((strcmp(name[1],"paper")==0) && (strcmp(name[2],"rock")==0))
	{
		players[p1].push_back(1);
		players[p2].push_back(0);
	}
	else if((strcmp(name[2],"paper")==0) && (strcmp(name[1],"rock")==0))
	{
		players[p1].push_back(0);
		players[p2].push_back(1);
	}

	if((strcmp(name[1],"scissors")==0) && (strcmp(name[2],"paper")==0))
	{
		players[p1].push_back(1);
		players[p2].push_back(0);
	}
	else if((strcmp(name[2],"scissors")==0) && (strcmp(name[1],"paper")==0))
	{
		players[p1].push_back(0);
		players[p2].push_back(1);
	}

	if((strcmp(name[1],"rock")==0) && (strcmp(name[2],"scissors")==0))
	{
		players[p1].push_back(1);
		players[p2].push_back(0);
	}
	else if((strcmp(name[2],"rock")==0) && (strcmp(name[1],"scissors")==0))
	{
		players[p1].push_back(0);
		players[p2].push_back(1);
	}

	return -1;
}
