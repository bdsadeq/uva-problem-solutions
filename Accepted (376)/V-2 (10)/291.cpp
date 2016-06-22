//The House Of Santa Claus (#291)
//Sadeq

#include<stdio.h>

void showlist(long f,long count);

long num[20];
long point[5][5]=
{
	{0,1,1,0,1},
	{1,0,1,0,1},
	{1,1,0,1,1},
	{0,0,1,0,1},
	{1,1,1,1,0}
};

int main()
{
	showlist(0,0);
	return 0;
}

void showlist(long f,long count)
{
	long i;
	num[count]=f+1;

	if(count==8)
	{
		for(i=0;i<9;i++)
		{
			printf("%ld",num[i]);
		}
		printf("\n");		
		return;
	}

	for(i=0;i<5;i++)
	{
		if(point[f][i]==1)
		{
			point[f][i]=0;
			point[i][f]=0;

			showlist(i,count+1);

			point[f][i]=1;
			point[i][f]=1;
		}
	}
}

