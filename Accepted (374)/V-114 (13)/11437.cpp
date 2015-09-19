//Triangle Fun (#11437)
//Sadeq
//find triangle area, ans is 1/7 of that area

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,cc;
	double ax,ay,bx,by,cx,cy;
	double a,b,c,s,area;

	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);

		a=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
		b=sqrt(((bx-cx)*(bx-cx))+((by-cy)*(by-cy)));
		c=sqrt(((cx-ax)*(cx-ax))+((cy-ay)*(cy-ay)));

		s=(a+b+c)/2;

		area=sqrt(s*(s-a)*(s-b)*(s-c));

		printf("%.0lf\n",area/7);
	}

	return 0;
}
