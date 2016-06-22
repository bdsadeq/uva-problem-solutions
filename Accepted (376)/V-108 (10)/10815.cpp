//Andy's First Dictionary (#10815)
//Sadeq

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int com(const void *a,const void *b);

char in[210],temp[1000001][210];

int main()
{
//	freopen("in.txt","r",stdin);
	long i=0,j,bs,dbs,len;
	long dig,k;

	while(gets(in))
	{
		//count lowercase letter
		len=strlen(in);
		for(j=0;j<len;j++)
		{
			if(!isalnum(in[j])) in[j]=' ';
			if(isupper(in[j])) in[j]=tolower(in[j]);
		}

		//build dictionary
		bs=dbs=0;
		while(sscanf(in+bs,"%s%n",&temp[i],&dbs)==1)
		{
			i++;
			bs=bs+dbs;
		}
	}

	//sorting
	qsort(temp,i,sizeof(temp[0]),com);
	
	//output
	for(j=0;j<i;j++)
	{
		dig=0;
		if(strcmp(temp[j],temp[j+1])!=0) 
		{
			len=strlen(temp[j]);
			for(k=0;k<len;k++)
			{
				if(isdigit(temp[j][k]))
				{
					dig=1;
					break;
				}
			}
			if(dig==0) printf("%s\n",temp[j]);
		}
	}
	return 0;
}

int com(const void *a,const void *b)
{
	return (strcmp((char *)a, (char *)b));
}
