//Maya Calendar (#300)
//Sadeq

#include<stdio.h>
#include<string.h>

long test_month(char month[]);
void print_day(long a);

int main()
{
	long cas,c,temp,temp1;
	long t_day,day,year;
	char month[50];
	long fnum,fday,fyear;

	scanf("%ld",&cas);
	printf("%ld\n",cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld. %s %ld",&day,&month,&year);

		//count total day
		temp=test_month(month);
		t_day=(365*year)+(20*temp)+day;

		//calculation
		fyear=t_day/260;
		temp1=t_day%260;
		if(temp1==0) temp1=260;
		fnum=(temp1%13)+1;
		if(fnum==0) fnum=13;
		fday=(temp1%20)+1;
		if(fday==0) fday=20;

		//output
		printf("%ld ",fnum);
		print_day(fday);
		printf(" %ld\n",fyear);
	}
	return 0;
}

long test_month(char month[])
{
	if(strcmp(month,"pop")==0) return 0;
	if(strcmp(month,"no")==0) return 1;
	if(strcmp(month,"zip")==0) return 2;
	if(strcmp(month,"zotz")==0) return 3;
	if(strcmp(month,"tzec")==0) return 4;

	if(strcmp(month,"xul")==0) return 5;
	if(strcmp(month,"yoxkin")==0) return 6;
	if(strcmp(month,"mol")==0) return 7;
	if(strcmp(month,"chen")==0) return 8;
	if(strcmp(month,"yax")==0) return 9;

	if(strcmp(month,"zac")==0) return 10;
	if(strcmp(month,"ceh")==0) return 11;
	if(strcmp(month,"mac")==0) return 12;
	if(strcmp(month,"kankin")==0) return 13;
	if(strcmp(month,"muan")==0) return 14;

	if(strcmp(month,"pax")==0) return 15;
	if(strcmp(month,"koyab")==0) return 16;
	if(strcmp(month,"cumhu")==0) return 17;
	if(strcmp(month,"uayet")==0) return 18;
}

void print_day(long a)
{
	if(a==1) printf("imix");
	if(a==2) printf("ik");
	if(a==3) printf("akbal");
	if(a==4) printf("kan");
	if(a==5) printf("chicchan");

	if(a==6) printf("cimi");
	if(a==7) printf("manik");
	if(a==8) printf("lamat");
	if(a==9) printf("muluk");
	if(a==10) printf("ok");

	if(a==11) printf("chuen");
	if(a==12) printf("eb");
	if(a==13) printf("ben");
	if(a==14) printf("ix");
	if(a==15) printf("mem");

	if(a==16) printf("cib");
	if(a==17) printf("caban");
	if(a==18) printf("eznab");
	if(a==19) printf("canac");
	if(a==20) printf("ahau");
}
