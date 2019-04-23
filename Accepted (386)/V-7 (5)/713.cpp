//Adding Reversed Numbers (#713)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in1[300],in2[300],dm[5];
	char ans[300];
	long ln1,ln2,car,i;
	long tmp1,tmp2,tmp3;
	long cas,c;
	long fz,lz;

	scanf("%ld",&cas);//gets(dm);
	for(c=1;c<=cas;c++)
	{
		scanf(" %s %s",&in1,in2);
		ln1=strlen(in1);
		ln2=strlen(in2);

		//fill all to zero
		for(i=ln1;i<300;i++) in1[i]='0';
		for(i=ln2;i<300;i++) in2[i]='0';

		//add
		car=0;
		for(i=0;i<300;i++)
		{
			tmp1=in1[i]-'0';
			tmp2=in2[i]-'0';
			tmp3=tmp1+tmp2+car;

			ans[i]=(tmp3%10)+'0';

			if(tmp3>9) car=1;
			else car=0;
		}

		//find 1st char
		fz=0;
		for(i=0;i<300;i++)
		{
			if(ans[i]!='0')
			{
				fz=i;
				break;
			}
		}

		//find last zero
		lz=0;
		for(i=299;i>=0;i--)
		{
			if(ans[i]!='0')
			{
				lz=i;
				break;
			}
		}

		//test
		//printf("output %ld %ld\n",fz,lz);

		if(fz>lz) printf("0\n");
		else
		{
			for(i=fz;i<=lz;i++)
			{
				printf("%c",ans[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
