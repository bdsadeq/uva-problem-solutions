//Dog and Gopher (#10310)
//Sadeq

#include<stdio.h>

int main()
{
	int hole,i;
	int found;
	double gx,gy,dx,dy;
	double hx[1200],hy[1200];
	double gdis,ddis;
	while(scanf("%d",&hole)==1)
	{
		scanf("%lf %lf %lf %lf",&gx,&gy,&dx,&dy);
		for(i=0;i<hole;i++)
		{
			scanf("%lf %lf",&hx[i],&hy[i]);
		}

		//claculating
		found=0;
		for(i=0;i<hole;i++)
		{
			gdis=((gx-hx[i])*(gx-hx[i]))+((gy-hy[i])*(gy-hy[i]));
			ddis=((dx-hx[i])*(dx-hx[i]))+((dy-hy[i])*(dy-hy[i]));

			if(ddis>=4*gdis)
			{
				printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",hx[i],hy[i]);
				found=1;
				break;
			}
		}
		if(found==0) printf("The gopher cannot escape.\n");
	}
	return 0;
}
