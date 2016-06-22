//Average Speed (#10281)
//Sadeq

#include<stdio.h>
#include<string.h>

char in[10000];

int main()
{
	long h[10000],m[10000],s[10000],spd[10000];
	long ts[10000];
	double dist=0,a,b,c;
	long i=0,j=1;
	long t,len,bs,dbs,temp[4],count;
	spd[0]=0;

	while(gets(in))
	{
		len=strlen(in);
		for(t=0;t<len;t++)
		{
			if(in[t]==':') in[t]=' ';
		}

		count=0;
		bs=dbs=0;
		while(sscanf(in+bs,"%d%n",&temp[count],&dbs)==1)
		{
			bs=bs+dbs;
			count++;
		}

		h[i]=temp[0];
		m[i]=temp[1];
		s[i]=temp[2];
		ts[i]=3600*h[i]+60*m[i]+s[i];

		a=(double)spd[j-1];
		b=(double)ts[i];
		if(i>0) c=(double)ts[i-1];
		dist=dist+((a*(b-c))/3600.0);

		if(count==4)
		{
			spd[j]=temp[3];
			j++;
		}		

		//output
		if(count==3)
		{
			if(h[i]<10) printf("0%ld:",h[i]);
			else printf("%ld:",h[i]);

			if(m[i]<10) printf("0%ld:",m[i]);
			else printf("%ld:",m[i]);

			if(s[i]<10) printf("0%ld",s[i]);
			else printf("%ld",s[i]);

			printf(" %.2lf km\n",dist);
		}
		i++;
	}
	return 0;
}
