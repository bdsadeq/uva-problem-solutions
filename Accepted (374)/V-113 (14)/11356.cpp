//Dates (#11356)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long yy,mm,dd,leap;
	long inyy,indd,num;
	char inmon[20];
	long cas,c;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld-%[a-z,A-Z]-%ld",&inyy,&inmon,&indd);
		scanf("%ld",&num);

		yy=inyy;
		dd=indd;
		if(inmon[0]=='J' && inmon[1]=='a' && inmon[2]=='n') mm=1;
		else if(inmon[0]=='F' && inmon[1]=='e' && inmon[2]=='b') mm=2;
		else if(inmon[0]=='M' && inmon[1]=='a' && inmon[2]=='r') mm=3;
		else if(inmon[0]=='A' && inmon[1]=='p' && inmon[2]=='r') mm=4;
		else if(inmon[0]=='M' && inmon[1]=='a' && inmon[2]=='y') mm=5;
		else if(inmon[0]=='J' && inmon[1]=='u' && inmon[2]=='n') mm=6;
		else if(inmon[0]=='J' && inmon[1]=='u' && inmon[2]=='l') mm=7;
		else if(inmon[0]=='A' && inmon[1]=='u' && inmon[2]=='g') mm=8;
		else if(inmon[0]=='S' && inmon[1]=='e' && inmon[2]=='p') mm=9;
		else if(inmon[0]=='O' && inmon[1]=='c' && inmon[2]=='t') mm=10;
		else if(inmon[0]=='N' && inmon[1]=='o' && inmon[2]=='v') mm=11;
		else if(inmon[0]=='D' && inmon[1]=='e' && inmon[2]=='c') mm=12;

		//calculation
		while(num--)
		{
			if((yy%4==0 && yy%100!=0) || yy%400==0) leap=1;
			else leap=0;

			dd++;
			if((mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12) && dd==32)
			{
				dd=1;
				mm++;
			}
			else if((mm==4 || mm==6 || mm==9 || mm==11) && dd==31)
			{
				dd=1;
				mm++;
			}
			else if(mm==2 && leap==1 && dd==30)
			{
				dd=1;
				mm++;
			}
			else if(mm==2 && leap==0 && dd==29)
			{
				dd=1;
				mm++;
			}

			if(mm==13)
			{
				mm=1;
				yy++;
			}
		}

		//output
		printf("Case %ld: ",c);
		printf("%ld-",yy);
		if(mm==1) printf("January");
		else if(mm==2) printf("February");
		else if(mm==3) printf("March");
		else if(mm==4) printf("April");
		else if(mm==5) printf("May");
		else if(mm==6) printf("June");
		else if(mm==7) printf("July");
		else if(mm==8) printf("August");
		else if(mm==9) printf("September");
		else if(mm==10) printf("October");
		else if(mm==11) printf("November");
		else if(mm==12) printf("December");

		if(dd<10) printf("-0%ld\n",dd);
		else printf("-%ld\n",dd);
	}

	return 0;
}
