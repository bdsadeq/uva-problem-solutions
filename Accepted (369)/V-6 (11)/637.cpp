//Booklet printing (#637)
//Sadeq

#include<stdio.h>

int main()
{
	int in,temp;
	int a[120];
	int i;
	int f1,f2,b1,b2;
	int count;
	int page;

	while(scanf("%d",&in))
	{
		if(in==0) break;

		if((in%4)==0) temp=(in/4);
		else temp=((in/4)+1);

		for(i=1;i<=(4*temp);i++) a[i]=i;
		count=4*temp;
		page=1;

		printf("Printing order for %d pages:\n",in);

		for(i=1;i<=temp;i++)
		{
			f1=a[count];
			f2=a[i*2-1];
			b1=a[i*2];
			b2=a[count-1];
			count=count-2;

			//1st part
			printf("Sheet %d, front:",page);

			if(f1>in) printf(" Blank,");
			else printf(" %d,",f1);

			if(f2>in) printf(" Blank\n");
			else printf(" %d\n",f2);

			//2nd part
			if(b1<=in || b2<=in)
			{
				printf("Sheet %d, back :",page);

				if(b1>in) printf(" Blank,");
				else printf(" %d,",b1);

				if(b2>in) printf(" Blank\n");
				else printf(" %d\n",b2);
			}
			page++;
		}
	}
	return 0;
}
