//ID Codes (#146)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	char in[100];
	int len;

	while(gets(in))
	{
		len=strlen(in);
		if(len==1 && in[0]=='#') break;
		if(next_permutation(in,in+len)) printf("%s\n",in);
		else printf("No Successor\n");
	}
	return 0;
}
