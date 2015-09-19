//Jolly Jumpers (#10038)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long num[3000],in[3000];
	long i,j,n;
	long tag,ab;
	while(scanf("%ld",&n)==1)
	{
		for(i=0;i<3000;i++)
		{
			num[i]=i+1;
		}
		for(i=0;i<n;i++)
		{
			scanf("%ld",&in[i]);
		}
		for(i=0;i<n-1;i++)
		{
			ab=abs (in[i]-in[i+1]);
			for(j=0;j<n-1;j++)
			{
				if(ab==num[j]) num[j]=0;
			}
		}
		tag=1;
		for(i=0;i<n-1;i++)
		{
			if(num[i]!=0)
			{
				tag=0;
				break;
			}
		}
		if(tag==1) printf("Jolly\n");
		if(tag==0) printf("Not jolly\n");
	}
	return 0;
}