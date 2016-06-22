//Tic Tac Toe (#10363)
//Sadeq

#include<stdio.h>

int main()
{
	int nx,no,xw,ow;
	char in[5][5];
	int cas,a;
	int i,x,y;
	scanf("%d",&cas);
	for(a=1;a<=cas;a++)
	{
		//input the grids
		for(i=0;i<3;i++)
		{
			scanf("%s",&in[i]);
		}
		
		//count X and O
		nx=0;
		no=0;
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
			{
				if(in[x][y]=='X') nx++;
				if(in[x][y]=='O') no++;
			}
		}
		
		//count who wins
		xw=0;
		ow=0;
		//x wins
		if(in[0][0]=='X' && in[0][1]=='X' && in[0][2]=='X') xw=1;
		if(in[2][0]=='X' && in[2][1]=='X' && in[2][2]=='X') xw=1;
		if(in[0][0]=='X' && in[1][0]=='X' && in[2][0]=='X') xw=1;
		if(in[0][2]=='X' && in[1][2]=='X' && in[2][2]=='X') xw=1;
		if(in[0][0]=='X' && in[1][1]=='X' && in[2][2]=='X') xw=1;
		if(in[0][2]=='X' && in[1][1]=='X' && in[2][0]=='X') xw=1;
		if(in[1][0]=='X' && in[1][1]=='X' && in[1][2]=='X') xw=1;
		if(in[0][1]=='X' && in[1][1]=='X' && in[2][1]=='X') xw=1;
		//o wins
		if(in[0][0]=='O' && in[0][1]=='O' && in[0][2]=='O') ow=1;
		if(in[2][0]=='O' && in[2][1]=='O' && in[2][2]=='O') ow=1;
		if(in[0][0]=='O' && in[1][0]=='O' && in[2][0]=='O') ow=1;
		if(in[0][2]=='O' && in[1][2]=='O' && in[2][2]=='O') ow=1;
		if(in[0][0]=='O' && in[1][1]=='O' && in[2][2]=='O') ow=1;
		if(in[0][2]=='O' && in[1][1]=='O' && in[2][0]=='O') ow=1;
		if(in[1][0]=='O' && in[1][1]=='O' && in[1][2]=='O') ow=1;
		if(in[0][1]=='O' && in[1][1]=='O' && in[2][1]=='O') ow=1;

		//output
		if((xw==1) && (ow==1)) printf("no\n");
		else if((xw==1) && (nx==no+1)) printf("yes\n");
		else if((ow==0) && (nx==no+1)) printf("yes\n");
		else if((ow==1) && (no==nx)) printf("yes\n");
		else if((xw==0 && no==nx)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}