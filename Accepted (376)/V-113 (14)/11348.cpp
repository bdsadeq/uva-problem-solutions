//Exhibition (#11348)
//Sadeq

#include<stdio.h>
#include<vector>
using namespace std;

long stamplist[70][10010];
long typelist[10010];
long value[70];

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	long i,j,k,frnd,temp,type,sum;
	double d1,d2;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&frnd);

		//all type to zero
		for(i=0;i<10010;i++)
		{
			typelist[i]=0;
		}
		for(i=0;i<70;i++)
		{
			value[i]=0;
		}
		for(i=0;i<51;i++)
		{
			for(j=0;j<10010;j++)
			{
				stamplist[i][j]=0;
			}
		}

		//input track
		for(i=1;i<=frnd;i++)
		{
			scanf("%ld",&type);
			for(j=1;j<=type;j++)
			{
				scanf("%ld",&temp);
				if(stamplist[i][temp]==0)
				{
					typelist[temp]++;
				}
				stamplist[i][temp]=1;
			}
		}

		//calculate
		sum=0;
		for(i=1;i<=frnd;i++)
		{
			for(j=1;j<=10010;j++)
			{
				if(stamplist[i][j]==1 && typelist[j]==1)
				{
					value[i]++;
					sum++;
					//printf(" %ld->%ld",value[i],j);//test
				}
			}
			//printf("\n");//test
		}

		//output
		printf("Case %ld:",c);
		for(i=1;i<=frnd;i++)
		{
			d1=(double)value[i];
			d1=d1*(100.0);
			d2=double(sum);
			printf(" %.6lf%c",d1/d2,'%');
		}
		printf("\n");
	}

	return 0;
}
