//Quotient Polynomial (#10719)
//Sadeq

#include<stdio.h>
#include<string.h>

char in[1000000],dm[5];

int main()
{
	//freopen("in.txt","r",stdin);
	long k,q[10000],p[10000];
	long count,bs,dbs;
	long i,x,y,r;

	while(scanf("%ld",&k)==1)
	{
		gets(dm);
		gets(in);
		//puts(in);

		//separate the code
		count=0;
		bs=dbs=0;
		while(sscanf(in+bs,"%ld%n",&p[count],&dbs)==1)
		{
			count++;
			bs=bs+dbs;
			//printf("%ld\n",p[count-1]);
		}

		if(count>2)
		{
			q[0]=p[0];
			for(i=1;i+1<count;i++)
			{
				x=q[i-1]*(-k);
				y=p[i]-x;
				q[i]=y;
			}
			r=q[i-1]*(-k);
			r=p[count-1]-r;

			//output
			printf("q(x):");
			for(i=0;i+1<count;i++)
			{
				printf(" %ld",q[i]);
			}
			printf("\nr = %ld\n\n",r);
		}
		else
		{
			printf("q(x): %ld",p[0]);
			r=p[0]*(-k);
			r=p[1]-r;
			printf("\nr = %ld\n\n",r);
		}
	}

	return 0;
}
