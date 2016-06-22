//Guard the Land (#11639)
//Sadeq

#include<stdio.h>

int arr[102][102];

int main()
{
	long i,j;
	long a1,a2,b1,b2;
	long x1,x2,y1,y2;
	long unsec,weaksec,stsec;
	long cas,c;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		//fill bt zero
		for(i=0;i<100;i++)
		{
			for(j=0;j<100;j++)
			{
				arr[i][j]=0;
			}
		}

		//take input 1
		scanf("%ld %ld %ld %ld",&a1,&b1,&a2,&b2);
		for(i=a1;i<a2;i++)
		{
			for(j=b1;j<b2;j++)
			{
				arr[i][j]++;
			}
		}

		//take input 2
		scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
		for(i=x1;i<x2;i++)
		{
			for(j=y1;j<y2;j++)
			{
				arr[i][j]++;
			}
		}

		//calculate
		unsec=0;
		weaksec=0;
		stsec=0;
		for(i=0;i<100;i++)
		{
			for(j=0;j<100;j++)
			{
				if(arr[i][j]==0) unsec++;
				if(arr[i][j]==1) weaksec++;
				if(arr[i][j]==2) stsec++;
			}
		}

		//output
		printf("Night %ld: %ld %ld %ld\n",c,stsec,weaksec,unsec);
	}

	return 0;
}
