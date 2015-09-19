//The Skyline Problem (#105)
//Sadeq

#include<stdio.h>

int main()
{
	int out[25000];
	int i,max=0,line;
	int n1,n2,n3;
	for(i=0;i<6000;i++)
	{
		out[i]=0;
	}
	while(scanf("%d %d %d",&n1,&n2,&n3)==3)
	{
		if(n3>max) max=n3;
		for(i=n1+1;i<=n3;i++)
		{
			if(n2>out[i]) out[i]=n2;
		}
	}
	line=0;
	for(i=2;i<=max+1;i++)
	{
		if(out[i]!=out[i-1])
		{
			if(line==1) printf(" ");
			printf("%d %d",i-1,out[i]);
			line=1;
		}
	}
	printf("\n");
	return 0;
}
