//Polynomial showdown (#392)
//Sadeq

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[9];
	int tag,i;

	//taking input
	while(scanf("%d %d %d %d %d %d %d %d %d",&a[8],&a[7],&a[6],&a[5],&a[4],&a[3],&a[2],&a[1],&a[0])==9)
	{
		tag=0;

		//power 8 to 2
		for(i=8;i>=2;i--)
		{
			if(tag==1 && a[i]!=0) printf(" ");
			if(a[i]!=0)
			{
				if(a[i]<0) printf("-");
				else if(tag==1 && a[i]>0) printf("+");
				if(tag==1) printf(" ");
				a[i]=abs(a[i]);
				if(a[i]==1) printf("x^%d",i);
				else printf("%dx^%d",a[i],i);
				tag=1;
			}
		}

		//power 1
		if(tag==1 && a[1]!=0) printf(" ");
		if(a[1]!=0)
		{
			if(a[1]<0) printf("-");
			else if(tag==1 && a[1]>0) printf("+");
			if(tag==1) printf(" ");
			a[1]=abs(a[1]);
			if(a[1]==1) printf("x");
			else printf("%dx",a[1]);
			tag=1;
		}

		//constant
		if(tag==1 && a[0]!=0) printf(" ");
		if(a[0]!=0)
		{
			if(a[0]<0) printf("-");
			else if(tag==1 && a[0]>0) printf("+");
			if(tag==1) printf(" ");
			a[0]=abs(a[0]);
			printf("%d",a[0]);
			tag=1;
		}

		if(tag==0) printf("0");

		printf("\n");
	}
	return 0;
}
