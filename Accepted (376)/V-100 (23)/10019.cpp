//Funny Encryption Method (#10019)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int dec1,hex1,r;
	int len;
	int cas,a,i;
	int dec,temp;
	char input[5];
	scanf("%d",&cas);
	for(a=1;a<=cas;a++)
	{
		scanf("%s",&input);
		//string convert to decimal
		len=strlen(input);
		temp=len;
		dec=0;
		for(i=0;i<len;i++)
		{
			temp--;
			dec=dec+(input[i]-'0')*pow(10,temp);
		}
		//testing dec 1
		dec1=0;
		while(1)
		{
			r=dec%2;
			if(r==1) dec1++;
			dec=dec/2;
			if(dec==0) break;
		}
		//testing hex 1
		hex1=0;
		len=strlen(input);
		for(i=0;i<len;i++)
		{
			if(input[i]=='1' || input[i]=='2' || input[i]=='4' || input[i]=='8') hex1=hex1+1;
			if(input[i]=='3' || input[i]=='5' || input[i]=='6' || input[i]=='9') hex1=hex1+2;
			if(input[i]=='7') hex1=hex1+3;
		}
		printf("%d %d\n",dec1,hex1);
	}
	return 0;
}