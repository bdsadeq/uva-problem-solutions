//Square root (#10023)
//Sadeq

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h> 
#define MAX 1010

int call_minus(char *large, char *small, char *result);
int call_sqrt(char *number,char *result,char *extra);
int reverse(char *from, char *to );
int call_mult(char *first,char *sec,char *result);

int main()
{ 
	char fir[MAX],ex[MAX],res[MAX],dm[5];
	int cas,c,line=0;
	scanf("%d",&cas);
	gets(dm);
	for(c=1;c<=cas;c++)
	{
		scanf("%s",&fir);
		if(line==1) printf("\n");
		line=1;
		call_sqrt(fir,res,ex); 
		int len=strlen(res); 
		for(int i=0;i<len;i++) printf("%c",res[i]); 
		printf("\n"); 
	} 
	return 0; 
}

int call_minus(char *large, char *small, char *result)
{ 
	char L[MAX], S[MAX]; 
	int l,s,now,hold,diff; 
	l=strlen(large); 
	s=strlen(small); 
	if(l<s) return 0; 
	if(l==s)
	{ 
		if(strcmp(large, small)<0) return 0; 
	} 
	reverse(large,L); 
	reverse(small,S);
	for(;s<l;s++) S[s]='0';
	S[s]='\0'; 
	for(now=0,hold=0;now<l;now++)
	{ 
		diff=L[now]-(S[now]+hold); 
		if(diff<0)
		{ 
			hold=1; 
			result[now]=10+diff+'0'; 
		} 
		else
		{ 
			result[now]=diff+'0'; 
			hold=0; 
		} 
	} 
	for(now=l-1;now>0;now--)
	{ 
		if(result[now]!='0') break; 
	} 
	result[now+1]='\0'; 
	reverse(result,L); 
	strcpy(result,L); 
	return 1; 
}

int call_sqrt(char *number,char *result,char *extra)
{ 
	int num,start,e,mul,l,r=0,len; 
	char left[MAX],after[MAX]; 
	char who[5],temp[MAX],two[5]; 
	len=strlen(number); 
	if(len%2==0)
	{ 
		num=10*(number[0]-'0') + number[1]-'0'; 
		start=2; 
	} 
	else
	{ 
		num=number[0]-'0'; 
		start=1; 
	} 
	mul=(int) sqrt(num);
	result[0]=mul+'0'; 
	result[1]='\0'; 
	if(num-mul*mul ==0) extra[0]='\0'; 
	else sprintf(extra,"%d",num-mul*mul); 
	for(;start<len;start+=2)
	{ 
		e=strlen(extra); 
		extra[e]=number[start]; 
		extra[e+1]=number[start+1]; 
		extra[e+2]='\0'; 
		two[0]='2'; 
		two[1]='\0'; 
		call_mult(result,two,left); 
		l=strlen(left); 
		for(mul=9;mul>=0;mul--)
		{ 
			who[0]=mul+'0'; 
			who[1]='\0';
			strcat(left,who); 
			call_mult(left,who,after); 
			if(call_minus(extra,after,temp)==1)
			{ 
				result[++r]=mul+'0'; 
				result[r+1]='\0'; 
				strcpy(extra,temp); 
				break;
			} 
			else left[l]='\0'; 
		} 
	} 
	result[++r]='\0'; 
	return 0;
}

int reverse(char *from, char *to )
{ 
	int len=strlen(from); 
	int l; 
	for(l=0;l<len;l++) to[l]=from[len-l-1];
	to[len]='\0'; 
	return 0;
}

int call_mult(char *first,char *sec,char *result)
{
	char F[MAX],S[MAX],temp[MAX]; 
	int f_len,s_len,f,s,r,t_len,hold,res;
	f_len=strlen(first);
	s_len=strlen(sec);
	reverse(first,F);
	reverse(sec,S);
	t_len=f_len+s_len;
	r=-1;
	for(f=0;f<=t_len;f++) 
		temp[f]='0';
	temp[f]='\0'; 
	for(s=0;s<s_len;s++)
	{
		hold=0;
		for(f=0;f<f_len;f++)
		{
			res=(F[f]-'0')*(S[s]-'0') + hold+(temp[f+s]-'0');
			temp[f+s]=res%10+'0'; 
			hold=res/10; 
			if(f+s>r) r=f+s;
		 } 
		while(hold!=0)
		{
			res=hold+temp[f+s]-'0'; 
			hold=res/10; 
			temp[f+s]=res%10+'0'; 
			if(r<f+s) r=f+s; f++;
		} 
	}
	for(;r>0 && temp[r]=='0';r--);
	temp[r+1]='\0'; reverse(temp,result);
	return 0;
}