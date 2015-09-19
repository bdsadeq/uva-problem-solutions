//NumPuzz I #12398
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);

	char input[300];
	int cas=0,result[4][4];
	int i,j,k;

	while(gets(input))
	{
		//assign all to zero
		cas++;

		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				result[i][j]=0;
			}
		}

		int len=strlen(input);

		for(i=0;i<len;i++)
		{
			if(input[i]=='a')
			{
				result[1][2]++;
				result[1][1]++;
				result[2][1]++;
			}

			if(input[i]=='b')
			{
				result[1][1]++;
				result[1][2]++;
				result[2][2]++;
				result[1][3]++;
			}

			if(input[i]=='c')
			{
				result[1][3]++;
				result[1][2]++;
				result[2][3]++;
			}

			if(input[i]=='d')
			{
				result[2][1]++;
				result[1][1]++;
				result[2][2]++;
				result[3][1]++;
			}

			if(input[i]=='e')
			{
				result[2][2]++;
				result[1][2]++;
				result[2][1]++;
				result[2][3]++;
				result[3][2]++;
			}

			if(input[i]=='f')
			{
				result[2][3]++;
				result[1][3]++;
				result[2][2]++;
				result[3][3]++;
			}

			if(input[i]=='g')
			{
				result[3][1]++;
				result[2][1]++;
				result[3][2]++;
			}

			if(input[i]=='h')
			{
				result[3][2]++;
				result[2][2]++;
				result[3][1]++;
				result[3][3]++;
			}

			if(input[i]=='i')
			{
				result[3][3]++;
				result[2][3]++;
				result[3][2]++;
			}

			//reduce the score
			for(k=0;k<4;k++)
			{
				for(j=0;j<4;j++)
				{
					result[k][j]=result[k][j]%10;
				}
			}
		}

		//output
		printf("Case #%d:\n",cas);
		for(k=1;k<4;k++)
		{
			for(j=1;j<4;j++)
			{
				printf("%d",result[k][j]);
				if(j<3) printf(" ");
			}
			printf("\n");
		}


	}


	return 0;
}
