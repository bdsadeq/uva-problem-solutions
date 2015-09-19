// Automatic Poetry #10361
//Sadeq

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	long len,i,j;
	char inp1[1000],inp2[1000];
	long flag=0;

	string str[5],input2;

	cin>>cas;
	gets(inp1);


	for(cc=1;cc<=cas;cc++)
	{
		gets(inp1);
		gets(inp2);

		len=strlen(inp1);

		str[0]="";
		str[1]="";
		str[2]="";
		str[3]="";
		str[4]="";

		flag=0;

		for(i=0;i<len;i++)
		{
			if(inp1[i]=='<' || inp1[i]=='>')
			{
				flag++;
				continue;
			}

			str[flag]=str[flag]+inp1[i];
		}

		for(i=0;i<len;i++)
		{
			if(inp1[i]=='<' || inp1[i]=='>')
			{
				continue;
			}

			cout<<inp1[i];
		}
		cout<<endl;

		input2=inp2;
		input2.replace(input2.find("..."),input2.length(),str[3]+str[2]+str[1]+str[4]);
		cout << input2 << endl;



	}



	return 0;
}
