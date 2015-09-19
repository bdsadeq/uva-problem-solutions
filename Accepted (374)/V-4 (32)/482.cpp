//Permutation Arrays (#482)
//Sadeq

#include<stdio.h>
#include<string.h>

char seq[100000],num[100000];
char nm[100000][100];
int sq[100000];
int temp;


int main()
{
	int cas,c;
	char dm[5];
	int bs,dbs;
	int i,j;
	int line=0;

	scanf("%d",&cas);
	gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(dm);

		gets(seq);
		bs=dbs=0;
		i=1;
		//store the sequence
		while(sscanf(seq+bs,"%d%n",&temp,&dbs)==1)
		{
			sq[i]=temp;
			i++;
			bs+=dbs;
		}

		gets(num);
		bs=dbs=0;
		i=1;
		//store the numbers using that sequences
		while(sscanf(num+bs,"%s%n",&nm[sq[i]],&dbs)==1)
		{
			i++;
			bs+=dbs;
		}

		//output
		if(line==1) printf("\n");
		line=1;
		for(j=1;j<i;j++)
		{
			printf("%s\n",nm[j]);
		}
	}
	return 0;
}
