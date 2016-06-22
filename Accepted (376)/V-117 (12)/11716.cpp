//Digital Fortress (#11716)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);

	char in[10010];
	long len,cas,c,temp;
	long i,j;

	scanf("%ld",&cas);gets(in);

	for(c=1;c<=cas;c++)
	{
		gets(in);
		len=strlen(in);

		temp=sqrt(len);

		if((temp*temp)!=len)
		{
			printf("INVALID\n");
		}

		else
		{
			for(i=0;i<temp;i++)
			{
				for(j=i;j<len;j=j+temp)
				{
					printf("%c",in[j]);
				}
			}
			printf("\n");
		}
	}

	return 0;
}
