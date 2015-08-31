//Ananagrams (#156)
//Sadeq

#include<stdio.h>
#include<iostream>
#include<string>
#include<ctype.h>
#include<algorithm>
using namespace std;

struct
{
	char main[100];
	char conv[100];
	long flag;
}list[5000];

int main()
{
	//freopen("in.txt","r",stdin);

	char in[200];
	long count=0,i,j,len;

	//take all input
	while(scanf("%s",&in))
	{
		if(strcmp(in,"#")==0) break;

		strcpy(list[count].main,in);
		strcpy(list[count].conv,in);

		len=strlen(list[count].main);
		for(i=0;i<len;i++)
		{
			list[count].conv[i]=tolower(list[count].conv[i]);
		}

		//sort individual string
		sort(list[count].conv,list[count].conv+len);

		count++;
	}

	//check all duplicates
	for(i=0;i<count;i++) list[i].flag=1;

	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			if(i!=j && strcmp(list[i].conv,list[j].conv)==0)
			{
				list[i].flag=0;
			}
		}
	}

	string all[1000];
	for(i=0,j=0;i<count;i++)
	{
		if(list[i].flag==1)
		{
			all[j]=list[i].main;
			j++;
		}
	}

	//sort
	sort(all,all+j);

	//output
	for(i=0;i<j;i++)
	{
		cout<<all[i]<<endl;
	}

	return 0;
}
