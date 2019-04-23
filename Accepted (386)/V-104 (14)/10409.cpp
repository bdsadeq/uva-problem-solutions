//Die game (#10409)
//Sadeq

#include<stdio.h>

int main()
{
	int top,bottom,north,south,east,west;
	int ntop,nbottom,nnorth,nsouth,neast,nwest;
	int a,i;
	char turn[10];
	while(scanf("%d",&a))
	{
		if(a==0) break;
		//initial value
		top=1;
		bottom=6;
		north=2;
		south=5;
		east=4;
		west=3;
		ntop=1;
		nbottom=6;
		nnorth=2;
		nsouth=5;
		neast=4;
		nwest=3;
		//every input
		for(i=1;i<=a;i++)
		{
			scanf("%s",&turn);
			//assigning new value
			if(turn[0]=='n')
			{
				ntop=south;
				nnorth=top;
				nbottom=north;
				nsouth=bottom;

				top=ntop;
				north=nnorth;
				bottom=nbottom;
				south=nsouth;
			}
			if(turn[0]=='s')
			{
				ntop=north;
				nnorth=bottom;
				nbottom=south;
				nsouth=top;

				top=ntop;
				north=nnorth;
				bottom=nbottom;
				south=nsouth;
			}
			if(turn[0]=='e')
			{
				ntop=west;
				nwest=bottom;
				nbottom=east;
				neast=top;

				top=ntop;
				west=nwest;
				bottom=nbottom;
				east=neast;
			}
			if(turn[0]=='w')
			{
				ntop=east;
				nwest=top;
				nbottom=west;
				neast=bottom;

				top=ntop;
				west=nwest;
				bottom=nbottom;
				east=neast;
			}
		}
		//output
		printf("%d\n",top);
	}
	return 0;
}