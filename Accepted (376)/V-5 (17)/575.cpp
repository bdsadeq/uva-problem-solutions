//Skew Binary (#575)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char bin[1000];
	long result,i,j,len;
	while(scanf("%s",&bin))
	{
		result=0;
		j=0;
		len=strlen(bin);
		if(len==1 && bin[0]=='0') break;
		for(i=len-1;i>=0;i--)
		{
			j++;
			result=result+(bin[i]-'0')*(pow(2,j)-1);
		}
		printf("%ld\n",result);
	}
	return 0;
}