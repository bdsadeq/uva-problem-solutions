//Greedy Gift Givers (#119)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char name[20][20];
	char dm[5];
	char temp[20],temp2[20];
	long money[20];
	long num,n,i,j;
	long a,b,sum;
	int line=0;

	while(scanf("%ld",&num)==1)
	{
		//take the name
		gets(dm);
		for(n=0;n<num;n++)
		{
			scanf(" %s",&name[n]);
			money[n]=0;
		}

		for(n=0;n<num;n++)
		{
			scanf(" %s",&temp);
			sum=0;
			scanf("%ld %ld",&a,&b);
			for(i=1;i<=b;i++)
			{
				scanf(" %s",&temp2);
				//find name
				for(j=0;j<num;j++)
				{
					if(strcmp(temp2,name[j])==0)
					{
						money[j]=money[j]+(a/b);
						sum=sum+(a/b);
						break;
					}
				}
			}
			//find giver name
			for(j=0;j<num;j++)
			{
				if(strcmp(temp,name[j])==0)
				{
					money[j]=money[j]-sum;
					break;
				}
			}
		}

		//output
		if(line==1) printf("\n");
		line=1;
		for(n=0;n<num;n++)
		{
			printf("%s %ld\n",name[n],money[n]);
		}
	}
	return 0;
}
