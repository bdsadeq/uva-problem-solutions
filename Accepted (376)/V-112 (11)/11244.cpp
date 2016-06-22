//Counting stars (#11244)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int r,c;
	int i,j;
	int count;
	int star;
	char a[200][200];
	char dm[2];
	while(1)
	{
		scanf("%d %d",&r,&c);
		if(r==0 && c==0) break;
		//initialize blank
		for(i=0;i<200;i++)
		{
			for(j=0;j<200;j++)
			{
				a[i][j]='.';
			}
		}

		count=0;
		gets(dm);

		//take input of stars
		for(i=0;i<r;i++)
		{
			gets(a[i]);
		}

		//counting stars
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]=='*')
				{
					star=1;
					if(i>0 && j>0 && a[i-1][j-1]=='*') star=0;
					if(i>0 && a[i-1][j]=='*') star=0;
					if(i>0 && a[i-1][j+1]=='*') star=0;

					if(j>0 && a[i][j-1]=='*') star=0;
					if(a[i][j+1]=='*') star=0;

					if(j>0 && a[i+1][j-1]=='*') star=0;
					if(a[i+1][j]=='*') star=0;
					if(a[i+1][j+1]=='*') star=0;

					if(star==1) count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
