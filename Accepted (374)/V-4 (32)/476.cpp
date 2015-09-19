//Points in Figures: Rectangles (#476)
//Sadeq

#include<stdio.h>

struct
{
	double xu,xl,yu,yl;
}pt[20];

int main()
{
	char ch[5];
	double x,y;
	long cnt=0,i;
	long found;
	long temp=0;

	//taking rectangle
	while(scanf(" %s",&ch))
	{
		if(ch[0]=='*') break;
		cnt++;
		scanf("%lf %lf %lf %lf",&pt[cnt].xu,&pt[cnt].yu,&pt[cnt].xl,&pt[cnt].yl);
	}

	//check the figure
	while(scanf("%lf %lf",&x,&y))
	{
		if(x==9999.9 && y==9999.9) break;
		found=0;
		temp++;
		for(i=1;i<=cnt;i++)
		{
			if((x>pt[i].xu && x<pt[i].xl) && (y<pt[i].yu && y>pt[i].yl))
			{
				printf("Point %ld is contained in figure %ld\n",temp,i);
				found=1;
			}
		}
		if(found==0) printf("Point %ld is not contained in any figure\n",temp);
	}
	return 0;
}
