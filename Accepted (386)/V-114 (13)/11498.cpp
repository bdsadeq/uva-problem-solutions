//Division of Nlogonia (#11498)
//Sadeq

#include<stdio.h>

int main()
{
	long x,y;
	long n,i,inx,iny;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		scanf("%ld %ld",&x,&y);
		for(i=1;i<=n;i++)
		{
			scanf("%ld %ld",&inx,&iny);

			if(inx==x || iny==y) printf("divisa\n");
			else if(inx>x && iny>y) printf("NE\n");
			else if(inx<x && iny>y) printf("NO\n");
			else if(inx>x && iny<y) printf("SE\n");
			else if(inx<x && iny<y) printf("SO\n");
		}
	}

	return 0;
}
