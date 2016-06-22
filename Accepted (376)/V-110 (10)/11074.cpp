//Draw Grid (#11074)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	long a,b,c,n;
	long i,j,k,l,cas=0;
	char ch[1000][1000];

	while(scanf("%ld %ld %ld",&a,&b,&c))
	{
		if(a==0 && b==0 && c==0) break;

		//calculate length
		n=((a+b)*c)+b;

		//fill all by *
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				ch[i][j]='*';
			}
		}

		//fill with dot
		for(i=0;i<n;i=i+a+b)
		{
			for(j=0;j<n;j=j+a+b)
			{
				for(k=i+b;k<i+a+b;k++)
				{
					for(l=j+b;l<j+a+b;l++)
					{
						ch[k][l]='.';
					}
				}
			}
		}

		//output
		cas++;
		printf("Case %ld:\n",cas);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",ch[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
