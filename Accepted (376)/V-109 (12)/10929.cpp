//You can say 11 (#10929)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[2000];
	long i,len,e_num,o_num,sub;
	while(scanf("%s",&in))
	{
		len=strlen(in);
		if(len==1 && in[0]=='0') break;
		//add even number
		e_num=0;
		for(i=0;i<len;i=i+2)
		{
			e_num=e_num+(in[i]-'0');
		}
		//add odd number
		o_num=0;
		for(i=1;i<len;i=i+2)
		{
			o_num=o_num+(in[i]-'0');
		}
		sub=o_num-e_num;
		if(sub%11==0) printf("%s is a multiple of 11.\n",in);
		else printf("%s is not a multiple of 11.\n",in);
	}
	return 0;
}