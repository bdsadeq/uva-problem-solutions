//Word Amalgamation (#642)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	string temp;
	long flag;
	string in[120];
	string sort_in[120];
	string out[120];
	char txt[20];
	long count=0,i,len,cnt;

	//take dictinary input
	while(gets(txt))
	{
		if(strcmp(txt,"XXXXXX")==0) break;
		in[count]=txt;

		//sort
		len=strlen(txt);
		sort(txt,txt+len);
		sort_in[count]=txt;

		count++;
	}

	//take other parts as input and process
	while(gets(txt))
	{
		if(strcmp(txt,"XXXXXX")==0) break;

		//sort this
		len=strlen(txt);
		sort(txt,txt+len);

		temp=txt;

		//find the word
		flag=0;
		cnt=0;
		for(i=0;i<count;i++)
		{
			if(temp==sort_in[i])
			{
				out[cnt]=in[i];
				cnt++;
				flag=1;
			}
		}

		//output
		sort(out,out+cnt);
		for(i=0;i<cnt;i++)
		{
			cout<<out[i]<<endl;
		}
		
		if(flag==0) printf("NOT A VALID WORD\n");
		printf("******\n");
	}

	return 0;
}
