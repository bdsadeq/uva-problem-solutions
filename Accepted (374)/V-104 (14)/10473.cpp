//Simple base coversion (#10473)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char in[50],out[50];
	long len,result,i,temp,dec,r,t;
	while(scanf("%s",&in))
	{
		//break condition
		if(in[0]=='-') break;
		//hex number to decimal
		if(in[1]=='x')
		{
			len=strlen(in);
			result=0;
			for(i=0;i<=len-3;i++)
			{
				if(in[len-i-1]=='A') temp=10;
				else if(in[len-i-1]=='B') temp=11;
				else if(in[len-i-1]=='C') temp=12;
				else if(in[len-i-1]=='D') temp=13;
				else if(in[len-i-1]=='E') temp=14;
				else if(in[len-i-1]=='F') temp=15;
				else temp=in[len-i-1]-'0';
				result=result+(temp*pow(16,i));
			}
			printf("%ld\n",result);
		}
		//decimal number to hex		
		else
		{
			//convert string to decimal
			temp=0;
			len=strlen(in);
			for(i=0;i<=len-1;i++)
			{
				temp=temp+((in[len-i-1]-'0')*pow(10,i));
			}
			//output reverse hex
			dec=temp;
			t=0;
			while(1)
			{
				r=dec%16;
				if(r==10) out[t]='A';
				else if(r==11) out[t]='B';
				else if(r==12) out[t]='C';
				else if(r==13) out[t]='D';
				else if(r==14) out[t]='E';
				else if(r==15) out[t]='F';
				else out[t]=r+'0';
				dec=dec/16;
				if(dec==0) break;
				t++;
			}
			//output original hex
			printf("0x");
			for(i=t;i>=0;i--)
			{
				printf("%c",out[i]);
			}
			printf("\n");
		}
	}
	return 0;
}