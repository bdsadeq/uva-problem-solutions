//Packing for Holiday (#12372)
//sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	int cas,cc;
	int a,b,c;

	scanf("%d",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%d %d %d",&a,&b,&c);

		if(a<=20 && b<=20 && c<=20)
		{
			printf("Case %d: good\n",cc);
		}
		else
		{
			printf("Case %d: bad\n",cc);
		}


	}


	return 0;
}
