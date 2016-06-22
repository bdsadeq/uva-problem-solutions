// Little Masters (12704)


#include<stdio.h>
#include<math.h>

int main()
{
    int CASE,C;
    double X,Y,TEMP,DIST;

    scanf("%d",&CASE);

    for(C=1; C<=CASE; C++)
    {
        scanf("%lf %lf %lf",&X,&Y,&DIST);

        TEMP=sqrt((X*X)+(Y*Y));

        printf("%.2lf %.2lf\n",DIST-TEMP,DIST+TEMP);

    }


    return 0;
}
