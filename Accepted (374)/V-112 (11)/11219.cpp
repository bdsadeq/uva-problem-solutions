//How Old Are You? (#11219)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,i;
	long d1,m1,y1;
	long d2,m2,y2;
	long td1,td2,year;
	scanf("%ld",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%ld/%ld/%ld",&d1,&m1,&y1);
		scanf("%ld/%ld/%ld",&d2,&m2,&y2);

		td1=y1*370+m1*30+d1;
		td2=y2*370+m2*30+d2;
		year=(td1-td2)/370;

		//output
		printf("Case #%ld: ",i);
		if(d2>d1 && m2>=m1 && y2>=y1) printf("Invalid birth date\n");
		else if(m2>m1 && y2>=y1) printf("Invalid birth date\n");
		else if(y2>y1) printf("Invalid birth date\n");
		else if(year>130) printf("Check birth date\n");
		else printf("%ld\n",year);
	}
	return 0;
}
