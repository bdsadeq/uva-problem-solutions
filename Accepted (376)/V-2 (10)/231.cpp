//Testing the CATCHER (#231)
//Sadeq

#include<stdio.h>

long call_lis(long n);

long length[10000],pred[10000],in[10000];

int main()
{
	long item,count=0,lis,cas=0,line=0;

	while(scanf("%ld",&item))
	{
		if(item==-1) break;
		in[count]=item;
		count++;
		cas++;
		if(line==1) printf("\n");
		line=1;
		while(scanf("%ld",&item))
		{
			if(item==-1) break;
			in[count]=item;
			count++;
		}

		lis=call_lis(count);
		printf("Test #%ld:\n",cas);
		printf("  maximum possible interceptions: %ld\n",lis);
		count=0;
	}
	return 0;
}

long call_lis(long n)
{
	long i,j,max=0;

	for(i=0;i<n;i++)
	{
		length[i]=1;
		pred[i]=0;
	}

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(in[j]<in[i])
			{
				if((length[i]+1)>length[j])
				{
					length[j]=length[i]+1;
					pred[i]=j;
				}
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(length[i]>max)
		{
			max=length[i];
		}
	}

	return max;
}
