//Traditional BINGO (#10813)
//Sadeq
//6 aug 2009

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	long in[30],i,j;
	long ball[80];
	long cas,c;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		//take input
		for(i=1;i<=12;i++)
		{
			scanf("%ld",&in[i]);
		}
		in[13]=0;
		for(i=14;i<=25;i++)
		{
			scanf("%ld",&in[i]);
		}

		for(i=1;i<=75;i++)
		{
			scanf("%ld",&ball[i]);
		}

		//process
		for(i=1;i<=75;i++)
		{
			for(j=1;j<=25;j++)
			{
				if(in[j]==ball[i])
				{
					in[j]=0;
					break;
				}
			}
			
			if(in[1]==0 && in[2]==0 && in[3]==0 && in[4]==0 && in[5]==0) break;
			if(in[6]==0 && in[7]==0 && in[8]==0 && in[9]==0 && in[10]==0) break;
			if(in[11]==0 && in[12]==0 && in[13]==0 && in[14]==0 && in[15]==0) break;
			if(in[16]==0 && in[17]==0 && in[18]==0 && in[19]==0 && in[20]==0) break;
			if(in[21]==0 && in[22]==0 && in[23]==0 && in[24]==0 && in[25]==0) break;

			if(in[1]==0 && in[6]==0 && in[11]==0 && in[16]==0 && in[21]==0) break;
			if(in[2]==0 && in[7]==0 && in[12]==0 && in[17]==0 && in[22]==0) break;
			if(in[3]==0 && in[8]==0 && in[13]==0 && in[18]==0 && in[23]==0) break;
			if(in[4]==0 && in[9]==0 && in[14]==0 && in[19]==0 && in[24]==0) break;
			if(in[5]==0 && in[10]==0 && in[15]==0 && in[20]==0 && in[25]==0) break;

			if(in[1]==0 && in[7]==0 && in[13]==0 && in[19]==0 && in[25]==0) break;
			if(in[5]==0 && in[9]==0 && in[13]==0 && in[17]==0 && in[21]==0) break;
			
		}

		printf("BINGO after %ld numbers announced\n",i);
	}

	return 0;
}
