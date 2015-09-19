//Love Calculator (#10424)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char nm1[30],nm2[30];
	long ln1,ln2;
	long i,sum1,sum2;
	long r1,r2;
	while(gets(nm1),gets(nm2))
	{
		ln1=strlen(nm1);
		ln2=strlen(nm2);
		sum1=0;
		sum2=0;
		r1=0;
		r2=0;
		
		for(i=0;i<ln1;i++)
		{
			if(nm1[i]>='A' && nm1[i]<='Z')
			{
				sum1=sum1+nm1[i]-'A'+1;
			}
			if(nm1[i]>='a' && nm1[i]<='z')
			{
				sum1=sum1+nm1[i]-'a'+1;
			}
		}

		for(i=0;i<ln2;i++)
		{
			if(nm2[i]>='A' && nm2[i]<='Z')
			{
				sum2=sum2+nm2[i]-'A'+1;
			}
			if(nm2[i]>='a' && nm2[i]<='z')
			{
				sum2=sum2+nm2[i]-'a'+1;
			}
		}

		for(;;)
		{
			r1=r1+(sum1%10);
			sum1=sum1/10;
			if(sum1==0) break;
		}
		sum1=r1;
		if(r1>9)
		{
			r1=0;
			for(;;)
			{
				r1=r1+(sum1%10);
				sum1=sum1/10;
				if(sum1==0) break;
			}
		}
		sum1=r1;
		if(r1>9)
		{
			r1=0;
			for(;;)
			{
				r1=r1+(sum1%10);
				sum1=sum1/10;
				if(sum1==0) break;
			}
		}
		sum1=r1;
		if(r1>9)
		{
			r1=0;
			for(;;)
			{
				r1=r1+(sum1%10);
				sum1=sum1/10;
				if(sum1==0) break;
			}
		}
		sum1=r1;
		if(r1>9)
		{
			r1=0;
			for(;;)
			{
				r1=r1+(sum1%10);
				sum1=sum1/10;
				if(sum1==0) break;
			}
		}
		sum1=r1;
		if(r1>9)
		{
			r1=0;
			for(;;)
			{
				r1=r1+(sum1%10);
				sum1=sum1/10;
				if(sum1==0) break;
			}
		}



		for(;;)
		{
			r2=r2+(sum2%10);
			sum2=sum2/10;
			if(sum2==0) break;
		}
		sum2=r2;
		if(r2>9)
		{
			r2=0;
			for(;;)
			{
				r2=r2+(sum2%10);
				sum2=sum2/10;
				if(sum2==0) break;
			}
		}
		sum2=r2;
		if(r2>9)
		{
			r2=0;
			for(;;)
			{
				r2=r2+(sum2%10);
				sum2=sum2/10;
				if(sum2==0) break;
			}
		}
		sum2=r2;
		if(r2>9)
		{
			r2=0;
			for(;;)
			{
				r2=r2+(sum2%10);
				sum2=sum2/10;
				if(sum2==0) break;
			}
		}
		sum2=r2;
		if(r2>9)
		{
			r2=0;
			for(;;)
			{
				r2=r2+(sum2%10);
				sum2=sum2/10;
				if(sum2==0) break;
			}
		}
		sum2=r2;
		if(r2>9)
		{
			r2=0;
			for(;;)
			{
				r2=r2+(sum2%10);
				sum2=sum2/10;
				if(sum2==0) break;
			}
		}


		if(r1<r2) printf("%.2f %c\n",((float)r1/(float)r2)*100,'%');
		else printf("%.2f %c\n",((float)r2/(float)r1)*100,'%');
	}
	return 0;
}