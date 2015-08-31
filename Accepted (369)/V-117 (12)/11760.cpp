//Brother Arif, please feed us! (#11760)
//Sadeq

#include<stdio.h>
#include<string.h>

long row[2010];
long col[2010];
long res_r[5];
long res_c[5];

int main()
{
	//freopen("in.txt","r",stdin);
	long r,c,n;
	long i,j;
	long a,b;
	long ans,cas=0;
	
	while(scanf("%ld %ld %ld",&r,&c,&n))
	{
		if(r==0 && c==0 && n==0) break;
		cas++;

		for(j=0;j<n;j++)
		{
			scanf("%ld %ld",&row[j],&col[j]);
		}

		scanf("%ld %ld",&a,&b);

		res_r[0]=a;
		res_c[0]=b;

		if(a>0)
		{
			res_r[1]=a-1;
			res_c[1]=b;
		}
		else
		{
			res_r[1]=-1;
			res_c[1]=-1;
		}

		if(a<r-1)
		{
			res_r[2]=a+1;
			res_c[2]=b;
		}
		else
		{
			res_r[2]=-1;
			res_c[2]=-1;
		}

		if(b>0)
		{
			res_r[3]=a;
			res_c[3]=b-1;
		}
		else
		{
			res_r[3]=-1;
			res_c[3]=-1;
		}

		if(b<c-1)
		{
			res_r[4]=a;
			res_c[4]=b+1;
		}
		else
		{
			res_r[4]=-1;
			res_c[4]=-1;
		}
		
		for(j=0;j<n;j++)
		{
			if(res_r[0]==row[j])
			{
				res_r[0]=-1;
				res_r[3]=-1;
				res_r[4]=-1;
			}
			if(a>0 && res_r[1]==row[j]) res_r[1]=-1;
			if(a<r-1 && res_r[2]==row[j]) res_r[2]=-1;

			if(res_c[0]==col[j])
			{
				res_c[0]=-1;
				res_c[1]=-1;
				res_c[2]=-1;
			}
			if(b>0 && res_c[3]==col[j]) res_c[3]=-1;
			if(b<c-1 && res_c[4]==col[j]) res_c[4]=-1;

		}
		

		//test
		//printf("%ld %ld %ld %ld %ld\n",res_r[0],res_r[1],res_r[2],res_r[3],res_r[4]);
		//printf("%ld %ld %ld %ld %ld\n",res_c[0],res_c[1],res_c[2],res_c[3],res_c[4]);

		ans=0;
		if(res_r[0]!=-1 && res_c[0]!=-1) ans=1;
		if(res_r[1]!=-1 && res_c[1]!=-1) ans=1;
		if(res_r[2]!=-1 && res_c[2]!=-1) ans=1;
		if(res_r[3]!=-1 && res_c[3]!=-1) ans=1;
		if(res_r[4]!=-1 && res_c[4]!=-1) ans=1;
		
		if(ans==1) printf("Case %ld: Escaped again! More 2D grid problems!\n",cas);
		else printf("Case %ld: Party time! Let's find a restaurant!\n",cas);

	}

	return 0;
}
