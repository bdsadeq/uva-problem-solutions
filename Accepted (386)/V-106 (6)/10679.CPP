//I love Strings!!! (#10679)
//Sadeq

#include<stdio.h>
//#include<iostream>
#include<string.h>
//using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	int cas,c,i,q,val;
	//string mn,qr;
	char mn[100010],qr[1010],dm[5];

	//cin>>cas;
	scanf("%d",&cas);
	gets(dm);
	for(c=1;c<=cas;c++)
	{
		//cin>>mn;
		gets(mn);
		//cin>>q;
		scanf("%d",&q);
		gets(dm);
		for(i=1;i<=q;i++)
		{
			//cin>>qr;
			gets(qr);
			char * pch;
			pch = strstr(mn,qr);
			//printf("%s\n",pch);
			if(pch!=NULL) printf("y\n");
			else printf("n\n");

			//check
			/*val=mn.find(qr);
			if(val!=-1) printf("y\n");
			else printf("n\n");*/
		}
	}
	return 0;
}
