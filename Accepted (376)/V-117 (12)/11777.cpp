//Automate the Grades (#11777)
//Sadeq

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

char calculateGrade(double d);

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc,i;
	double total;
	double a,b,c,d,temp;
	vector<double> ct;

	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		ct.clear();
		for(i=0;i<3;i++)
		{
			scanf("%lf",&temp);
			ct.push_back(temp);
		}

		sort(ct.begin(),ct.end());

		total=a+b+c+d+((ct[2]+ct[1])/2);

		printf("Case %ld: %c\n",cc,calculateGrade(total));
	}
	return 0;
}

char calculateGrade(double d)
{
	//printf("%lf\n",d);
	if(d>=90) return 'A';
	else if(d>=80 && d<90) return 'B';
	else if(d>=70 && d<80) return 'C';
	else if(d>=60 && d<70) return 'D';
	else return 'F';
}