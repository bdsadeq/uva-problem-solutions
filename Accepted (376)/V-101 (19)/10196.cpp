//Check The Check (#10196)
//Sadeq
//Simulation

#include<stdio.h>
#include<string.h>

int check_black(int a, int b);
int check_white(int a, int b);

char in[10][10];
int wht_r,wht_c;
int blk_r,blk_c;

int main()
{
	//freopen("in.txt","r",stdin);
	int white,black,end;
	int i,j,cas=0;

	while(1)
	{
		//take input
		end=0;
		cas++;
		for(i=0;i<8;i++)
		{
			gets(in[i]);
			for(j=0;j<8;j++)
			{
				if(in[i][j]!='.') end=1;
				if(in[i][j]=='k')
				{
					blk_r=i;
					blk_c=j;
				}
				if(in[i][j]=='K')
				{
					wht_r=i;
					wht_c=j;
				}
			}
		}

		if(end==0) break;

		black=check_black(blk_r,blk_c);
		white=check_white(wht_r,wht_c);

		//output
		if(white==1) printf("Game #%d: white king is in check.\n",cas);
		else if(black==1) printf("Game #%d: black king is in check.\n",cas);
		else if(white==0 && black==0) printf("Game #%d: no king is in check.\n",cas);

		//dummy input for last line
		gets(in[0]);
	}
	return 0;
}

int check_black(int a, int b)
{
	int i,j;
	//check pawn
	if(a<=6 && b>=1 && in[a+1][b-1]=='P') return 1;
	if(a<=6 && b<=6 && in[a+1][b+1]=='P') return 1;

	//check knight
	if(a>=2 && b>=1 && in[a-2][b-1]=='N') return 1;
	if(a>=1 && b>=2 && in[a-1][b-2]=='N') return 1;
	if(a<=6 && b>=2 && in[a+1][b-2]=='N') return 1;
	if(a<=5 && b>=1 && in[a+2][b-1]=='N') return 1;
	if(a>=2 && b<=6 && in[a-2][b+1]=='N') return 1;
	if(a>=1 && b<=5 && in[a-1][b+2]=='N') return 1;
	if(a<=6 && b<=5 && in[a+1][b+2]=='N') return 1;
	if(a<=5 && b<=6 && in[a+2][b+1]=='N') return 1;


	//check bishop and queen
	for(i=a,j=b;i>=0 && j>=0;i--,j--)
	{
		if(in[i][j]=='B' || in[i][j]=='Q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='k') continue;
		else break;
	}
	for(i=a,j=b;i<=7 && j>=0;i++,j--)
	{
		if(in[i][j]=='B' || in[i][j]=='Q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='k') continue;
		else break;
	}
	for(i=a,j=b;i>=0 && j<=7;i--,j++)
	{
		if(in[i][j]=='B' || in[i][j]=='Q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='k') continue;
		else break;
	}
	for(i=a,j=b;i<=7 && j<=7;i++,j++)
	{
		if(in[i][j]=='B' || in[i][j]=='Q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='k') continue;
		else break;
	}

	//check Rook and queen
	for(i=a;i>=0;i--)
	{
		if(in[i][b]=='R' || in[i][b]=='Q') return 1;
		else if(in[i][b]=='.' || in[i][b]=='k') continue;
		else break;
	}
	for(i=a;i<=7;i++)
	{
		if(in[i][b]=='R' || in[i][b]=='Q') return 1;
		else if(in[i][b]=='.' || in[i][b]=='k') continue;
		else break;
	}
	for(i=b;i>=0;i--)
	{
		if(in[a][i]=='R' || in[a][i]=='Q') return 1;
		else if(in[a][i]=='.' || in[a][i]=='k') continue;
		else break;
	}
	for(i=b;i<=7;i++)
	{
		if(in[a][i]=='R' || in[a][i]=='Q') return 1;
		else if(in[a][i]=='.' || in[a][i]=='k') continue;
		else break;
	}
	return 0;
}

int check_white(int a, int b)
{
	int i,j;
	//check pawn
	if(a>=1 && b>=1 && in[a-1][b-1]=='p') return 1;
	if(a>=1 && b<=6 && in[a-1][b+1]=='p') return 1;

	//check knight
	if(a>=2 && b>=1 && in[a-2][b-1]=='n') return 1;
	if(a>=1 && b>=2 && in[a-1][b-2]=='n') return 1;
	if(a<=6 && b>=2 && in[a+1][b-2]=='n') return 1;
	if(a<=5 && b>=1 && in[a+2][b-1]=='n') return 1;
	if(a>=2 && b<=6 && in[a-2][b+1]=='n') return 1;
	if(a>=1 && b<=5 && in[a-1][b+2]=='n') return 1;
	if(a<=6 && b<=5 && in[a+1][b+2]=='n') return 1;
	if(a<=5 && b<=6 && in[a+2][b+1]=='n') return 1;


	//check bishop and queen
	for(i=a,j=b;i>=0 && j>=0;i--,j--)
	{
		if(in[i][j]=='b' || in[i][j]=='q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='K') continue;
		else break;
	}
	for(i=a,j=b;i<=7 && j>=0;i++,j--)
	{
		if(in[i][j]=='b' || in[i][j]=='q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='K') continue;
		else break;
	}
	for(i=a,j=b;i>=0 && j<=7;i--,j++)
	{
		if(in[i][j]=='b' || in[i][j]=='q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='K') continue;
		else break;
	}
	for(i=a,j=b;i<=7 && j<=7;i++,j++)
	{
		if(in[i][j]=='b' || in[i][j]=='q') return 1;
		else if(in[i][j]=='.' || in[i][j]=='K') continue;
		else break;
	}

	//check Rook and queen
	for(i=a;i>=0;i--)
	{
		if(in[i][b]=='r' || in[i][b]=='q') return 1;
		else if(in[i][b]=='.' || in[i][b]=='K') continue;
		else break;
	}
	for(i=a;i<=7;i++)
	{
		if(in[i][b]=='r' || in[i][b]=='q') return 1;
		else if(in[i][b]=='.' || in[i][b]=='K') continue;
		else break;
	}
	for(i=b;i>=0;i--)
	{
		if(in[a][i]=='r' || in[a][i]=='q') return 1;
		else if(in[a][i]=='.' || in[a][i]=='K') continue;
		else break;
	}
	for(i=b;i<=7;i++)
	{
		if(in[a][i]=='r' || in[a][i]=='q') return 1;
		else if(in[a][i]=='.' || in[a][i]=='K') continue;
		else break;
	}
	return 0;
}
