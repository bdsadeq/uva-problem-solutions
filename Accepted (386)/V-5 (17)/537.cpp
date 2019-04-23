//Artificial Intelligence? (#537)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int cas,c;
	int bs,dbs,i;
	int fnd_pp,fnd_ii,fnd_uu;
	int len;

	long double pp,ii,uu,temp;

	char in[10000],dm[5];
	char part[200][50];


	scanf("%d",&cas);
	gets(dm);
	for(c=1;c<=cas;c++)
	{
		//take input one line
		gets(in);

		//distribute the line and test on i,p,u
		pp=ii=uu=1;
		fnd_pp=fnd_ii=fnd_uu=0;
		bs=dbs=0;
		i=0;
		while(sscanf(in+bs,"%s%n",&part[i],&dbs)==1)
		{
			len=strlen(part[i]);

			if(part[i][0]=='I' && part[i][1]=='=')
			{
				fnd_ii=1;
				part[i][0]=' ';
				part[i][1]=' ';
				if(part[i][len-1]=='m' || part[i][len-2]=='m' || part[i][len-3]=='m') ii=ii*0.001;
				else if(part[i][len-1]=='k' || part[i][len-2]=='k' || part[i][len-3]=='k') ii=ii*1000;
				else if(part[i][len-1]=='M' || part[i][len-2]=='M' || part[i][len-3]=='M') ii=ii*1000000;
				sscanf(part[i],"%Lf",&temp);
				ii=ii*temp;
			}
			else if(part[i][0]=='P' && part[i][1]=='=')
			{
				fnd_pp=1;
				part[i][0]=' ';
				part[i][1]=' ';
				if(part[i][len-1]=='m' || part[i][len-2]=='m' || part[i][len-3]=='m') pp=pp*0.001;
				else if(part[i][len-1]=='k' || part[i][len-2]=='k' || part[i][len-3]=='k') pp=pp*1000;
				else if(part[i][len-1]=='M' || part[i][len-2]=='M' || part[i][len-3]=='M') pp=pp*1000000;
				sscanf(part[i],"%Lf",&temp);
				pp=pp*temp;
			}
			else if(part[i][0]=='U' && part[i][1]=='=')
			{
				fnd_uu=1;
				part[i][0]=' ';
				part[i][1]=' ';
				if(part[i][len-1]=='m' || part[i][len-2]=='m' || part[i][len-3]=='m') uu=uu*0.001;
				else if(part[i][len-1]=='k' || part[i][len-2]=='k' || part[i][len-3]=='k') uu=uu*1000;
				else if(part[i][len-1]=='M' || part[i][len-2]=='M' || part[i][len-3]=='M') uu=uu*1000000;
				sscanf(part[i],"%Lf",&temp);
				uu=uu*temp;
			}

			i++;
			bs=bs+dbs;
		}

		//output
		printf("Problem #%d\n",c);
		if(fnd_pp==0) printf("P=%.2LfW\n\n",uu*ii);
		else if(fnd_ii==0) printf("I=%.2LfA\n\n",pp/uu);
		else if(fnd_uu==0) printf("U=%.2LfV\n\n",pp/ii);

	}
	return 0;
}
