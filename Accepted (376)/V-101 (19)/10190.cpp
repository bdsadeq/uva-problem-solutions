//Divide, but not quite conquer! (#10190)
//Sadeq

#include<stdio.h>

int main()
{
	long a,b,i,j,quit;
	long seq[50];
	while(scanf("%ld %ld",&a,&b)==2)
	{
		i=0;
		seq[0]=a;
		quit=0;

		if(a==0 || b==1 || b==0) quit=1;
		else
		{
			while(1)
			{
				if((a%b)==0)
				{
					i++;
					seq[i]=a/b;
					if((a/b)==1) break;
					a=a/b;
				}
				else
				{
					quit=1;
					break;
				}
			}
		}

		if(quit==1) printf("Boring!\n");
		if(quit==0)
		{
			printf("%ld",seq[0]);
			for(j=1;j<=i;j++)
			{
				printf(" %ld",seq[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
