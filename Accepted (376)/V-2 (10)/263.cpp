//Number Chains (#263)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

bool sortfunc(int a, int b);

int main()
{
	char in[15],in1[15],in2[15];
	long dec,dec1,dec2;
	long list[2000];
	int i,count,found;

	while(gets(in))
	{
		//convert to decimal
		sscanf(in,"%ld",&dec);
		if(dec==0) break;

		printf("Original number was %ld\n",dec);

		count=0;
		found=0;
		list[count]=dec;

		while(1)
		{
			sprintf(in1,"%ld",dec);
			//descending sort
			sort(in1,in1+strlen(in1),sortfunc);
			//convert to decimal
			sscanf(in1,"%ld",&dec1);

			sprintf(in2,"%ld",dec);
			//ascending sort
			sort(in2,in2+strlen(in2));
			//convert to decimal
			sscanf(in2,"%ld",&dec2);

			printf("%ld - %ld = %ld\n",dec1,dec2,dec1-dec2);

			//check list
			for(i=0;i<=count;i++)
			{
				if((dec1-dec2)==list[i])
				{
					found=1;
					count++;
					break;
				}
			}

			//add to list
			if(found==0)
			{
				count++;
				list[count]=dec1-dec2;
			}

			if(found==1) 
			{
				printf("Chain length %d\n\n",count);
				break;
			}

			dec=dec1-dec2;
		}
	}
	return 0;
}

bool sortfunc(int a, int b)
{
	return (a>b);
}
