//Points in Figures: Rectangles and Circles (#477)
//Sadeq

#include<stdio.h>

struct
{
	char ch[5];
	//rectangle
	double xu,xl,yu,yl;
	//circle
	double xc,yc,r;
}pt[20];

int main()
{
	double x,y;
	long cnt=1,i;
	long found;
	long temp=0;

	//taking input
	while(scanf(" %s",&pt[cnt].ch))
	{
		if(pt[cnt].ch[0]=='*') break;
		if(pt[cnt].ch[0]=='r') scanf("%lf %lf %lf %lf",&pt[cnt].xu,&pt[cnt].yu,&pt[cnt].xl,&pt[cnt].yl);
		if(pt[cnt].ch[0]=='c') scanf("%lf %lf %lf",&pt[cnt].xc,&pt[cnt].yc,&pt[cnt].r);
		cnt++;
	}

	//check the figure
	while(scanf("%lf %lf",&x,&y))
	{
		if(x==9999.9 && y==9999.9) break;
		found=0;
		temp++;
		for(i=1;i<cnt;i++)
		{
			if(pt[i].ch[0]=='r')
			{
				if((x>pt[i].xu && x<pt[i].xl) && (y<pt[i].yu && y>pt[i].yl))
				{
					printf("Point %ld is contained in figure %ld\n",temp,i);
					found=1;
				}
			}

			if(pt[i].ch[0]=='c')
			{
				if(((x-pt[i].xc)*(x-pt[i].xc))+((y-pt[i].yc)*(y-pt[i].yc))<pt[i].r*pt[i].r)
				{
					printf("Point %ld is contained in figure %ld\n",temp,i);
					found=1;
				}
			}
		}
		if(found==0) printf("Point %ld is not contained in any figure\n",temp);
	}
	return 0;
}
