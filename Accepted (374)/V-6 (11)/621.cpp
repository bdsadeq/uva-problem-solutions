//Secret Research (#621)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10000];
	int cas,len,i;
	scanf("%d",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%s",a);
		len=strlen(a);
		if(len==1 && a[0]=='1') printf("+\n");
		else if(len==1 && a[0]=='4') printf("+\n");
		else if(len==2 && (a[0]=='7' && a[1]=='8')) printf("+\n");
		else if(a[len-2]=='3' && a[len-1]=='5') printf("-\n");
		else if(a[0]=='9' && a[len-1]=='4') printf("*\n");
		else if(a[0]=='1' && a[1]=='9' && a[2]=='0') printf("?\n");
	}
	return 0;
}