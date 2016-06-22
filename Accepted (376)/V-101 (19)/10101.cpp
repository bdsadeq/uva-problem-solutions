//Bangla Numbers (#10101)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[200];
	int temp[50];
	int i;
	long cas=0;
	int tag;
	int len;
	int zero;
	
	while(scanf("%s",&in)==1)
	{
		len=strlen(in);
		zero=0;
		tag=0;
		i=0;
		cas++;
		printf("%4ld.",cas);

		if(len>14)
		{
			if(len>15) temp[i]=((in[len-16]-'0')*10)+(in[len-15]-'0');
			else temp[i]=(in[len-15]-'0');

			if(temp[i]>0) 
			{
				printf(" %d kuti",temp[i]);
				tag=1;
				zero=1;
			}
			i++;
		}

		if(len>12)
		{
			if(len>13) temp[i]=((in[len-14]-'0')*10)+(in[len-13]-'0');
			else temp[i]=(in[len-13]-'0');

			if(temp[i]>0) 
			{
				printf(" %d lakh",temp[i]);
				tag=1;
				zero=1;
			}
			i++;
		}

		if(len>10)
		{
			if(len>11) temp[i]=((in[len-12]-'0')*10)+(in[len-11]-'0');
			else temp[i]=(in[len-11]-'0');

			if(temp[i]>0)
			{
				printf(" %d hajar",temp[i]);
				tag=1;
				zero=1;
			}
			i++;
		}

		if(len>9)
		{
			temp[i]=(in[len-10]-'0');

			if(temp[i]>0) 
			{
				printf(" %d shata",temp[i]);
				tag=1;
				zero=1;
			}
			i++;
		}

		if(len>7)
		{
			if(len>8) temp[i]=((in[len-9]-'0')*10)+(in[len-8]-'0');
			else temp[i]=(in[len-8]-'0');

			if(temp[i]>0)
			{
				printf(" %d kuti",temp[i]);
				zero=1;
			}
			if(temp[i]==0 && tag==1)
			{
				printf(" kuti");
				zero=1;
			}
			i++;
		}

		if(len>5)
		{
			if(len>6) temp[i]=((in[len-7]-'0')*10)+(in[len-6]-'0');
			else temp[i]=(in[len-6]-'0');

			if(temp[i]>0)
			{
				printf(" %d lakh",temp[i]);
				zero=1;
			}
			i++;
		}

		if(len>3)
		{
			if(len>4) temp[i]=((in[len-5]-'0')*10)+(in[len-4]-'0');
			else temp[i]=(in[len-4]-'0');

			if(temp[i]>0)
			{
				printf(" %d hajar",temp[i]);
				zero=1;
			}
			i++;
		}

		if(len>2)
		{
			temp[i]=(in[len-3]-'0');
			if(temp[i]>0)
			{
				printf(" %d shata",temp[i]);
				zero=1;
			}
			i++;
		}

		if(len>0)
		{
			if(len>1) temp[i]=((in[len-2]-'0')*10)+(in[len-1]-'0');
			else temp[i]=(in[len-1]-'0');

			if(temp[i]>0) 
			{
				printf(" %d",temp[i]);
				zero=1;
			}
			i++;
		}

		if(zero==0) printf(" 0");

		printf("\n");
	}	
	return 0;
}
