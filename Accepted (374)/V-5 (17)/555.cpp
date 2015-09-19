//Bridge Hands (#555)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int return_value(char ch);
char return_char(int num);
char return_deck(int num);

int main()
{
	//freopen("in.txt","r",stdin);

	char in1[1000];
	char in2[1000];
	char in[1000];
	char deck;
	char input[20];
	int i,len,j;
	vector<int> allDeck; //converted to integer value
	vector<int> player[4];
	int sz;
	int start;

	while(gets(input))
	{
		deck=input[0];
		if(deck=='#') break;
		allDeck.clear();

		//first line
		gets(in);
		gets(in2);
		
		strcat(in, in2);

		len=strlen(in);

		for(i=0;i<len-1;i=i+2)
		{
			allDeck.push_back(return_value(in[i])*100+return_value(in[i+1]));
		}

		sz=allDeck.size();

		player[0].clear();
		player[1].clear();
		player[2].clear();
		player[3].clear();

		if(deck=='N') start=3;
		else if(deck=='E') start=0;
		else if(deck=='S') start=1;
		else if(deck=='W') start=2;

		for(i=0;i<sz;i=i+4)
		{
			player[(start+0)%4].push_back(allDeck[i]);
			player[(start+1)%4].push_back(allDeck[i+1]);
			player[(start+2)%4].push_back(allDeck[i+2]);
			player[(start+3)%4].push_back(allDeck[i+3]);

			//printf(" %d %d %d %d\n",allDeck[i],allDeck[i+1],allDeck[i+2],allDeck[i+3]);
		}

		//sort
		sort(player[0].begin(),player[0].end());
		sort(player[1].begin(),player[1].end());
		sort(player[2].begin(),player[2].end());
		sort(player[3].begin(),player[3].end());


		//output
		for(i=0;i<4;i++)
		{
			if(i==0) printf("S:");
			if(i==1) printf("W:");
			if(i==2) printf("N:");
			if(i==3) printf("E:");

			for(j=0;j<player[i].size();j++)
			{
				printf(" %c%c",return_deck(player[i][j]/100),return_char(player[i][j]%100));
				//printf(" %d",player[i][j]);
			}

			printf("\n");
		}
		

	}

	return 0;
}

int return_value(char ch)
{
	if(ch=='C') return 1;
	if(ch=='D') return 2;
	if(ch=='S') return 3;
	if(ch=='H') return 4;

	if(ch>='2' && ch<='9')
	{
		return ch-'0';
	}

	if(ch=='T') return 10;
	if(ch=='J') return 11;
	if(ch=='Q') return 12;
	if(ch=='K') return 13;
	if(ch=='A') return 14;
}

char return_deck(int num)
{
	if(num==1) return 'C';
	if(num==2) return 'D';
	if(num==3) return 'S';
	if(num==4) return 'H';
}

char return_char(int num)
{
	if(num>=2 && num<=9) return num+'0';
	if(num==10) return 'T';
	if(num==11) return 'J';
	if(num==12) return 'Q';
	if(num==13) return 'K';
	if(num==14) return 'A';
}
