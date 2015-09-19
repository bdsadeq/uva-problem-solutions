//LC-Display (#706)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char dig[10];
	int i,j,x;
	int len,space,line=0;;
	while(scanf("%d %s",&n,&dig))
	{
		len=strlen(dig);
		if(n==0 && (len==1 && dig[0]=='0')) break;
		//1st part
		space=0;
		for(x=0;x<len;x++)
		{
			if(space!=0) printf(" ");

			if(dig[x]=='0') printf(" ");
			if(dig[x]=='0') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='0') printf(" ");

			if(dig[x]=='1') printf(" ");
			if(dig[x]=='1') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='1') printf(" ");

			if(dig[x]=='2') printf(" ");
			if(dig[x]=='2') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='2') printf(" ");

			if(dig[x]=='3') printf(" ");
			if(dig[x]=='3') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='3') printf(" ");

			if(dig[x]=='4') printf(" ");
			if(dig[x]=='4') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='4') printf(" ");

			if(dig[x]=='5') printf(" ");
			if(dig[x]=='5') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='5') printf(" ");

			if(dig[x]=='6') printf(" ");
			if(dig[x]=='6') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='6') printf(" ");

			if(dig[x]=='7') printf(" ");
			if(dig[x]=='7') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='7') printf(" ");

			if(dig[x]=='8') printf(" ");
			if(dig[x]=='8') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='8') printf(" ");

			if(dig[x]=='9') printf(" ");
			if(dig[x]=='9') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='9') printf(" ");

			space=1;
		}
		printf("\n");
		//2nd part
		for(j=1;j<=n;j++)
		{
			space=0;
			for(x=0;x<len;x++)
			{
				if(space!=0) printf(" ");

				if(dig[x]=='0') printf("|");
				if(dig[x]=='0') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='0') printf("|");

				if(dig[x]=='1') printf(" ");
				if(dig[x]=='1') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='1') printf("|");

				if(dig[x]=='2') printf(" ");
				if(dig[x]=='2') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='2') printf("|");

				if(dig[x]=='3') printf(" ");
				if(dig[x]=='3') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='3') printf("|");

				if(dig[x]=='4') printf("|");
				if(dig[x]=='4') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='4') printf("|");

				if(dig[x]=='5') printf("|");
				if(dig[x]=='5') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='5') printf(" ");

				if(dig[x]=='6') printf("|");
				if(dig[x]=='6') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='6') printf(" ");

				if(dig[x]=='7') printf(" ");
				if(dig[x]=='7') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='7') printf("|");

				if(dig[x]=='8') printf("|");
				if(dig[x]=='8') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='8') printf("|");

				if(dig[x]=='9') printf("|");
				if(dig[x]=='9') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='9') printf("|");
				
				space=1;
			}
			printf("\n");
		}
		//3rd part
		space=0;
		for(x=0;x<len;x++)
		{
			if(space!=0) printf(" ");

			if(dig[x]=='0') printf(" ");
			if(dig[x]=='0') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='0') printf(" ");

			if(dig[x]=='1') printf(" ");
			if(dig[x]=='1') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='1') printf(" ");

			if(dig[x]=='2') printf(" ");
			if(dig[x]=='2') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='2') printf(" ");

			if(dig[x]=='3') printf(" ");
			if(dig[x]=='3') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='3') printf(" ");

			if(dig[x]=='4') printf(" ");
			if(dig[x]=='4') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='4') printf(" ");

			if(dig[x]=='5') printf(" ");
			if(dig[x]=='5') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='5') printf(" ");

			if(dig[x]=='6') printf(" ");
			if(dig[x]=='6') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='6') printf(" ");

			if(dig[x]=='7') printf(" ");
			if(dig[x]=='7') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='7') printf(" ");

			if(dig[x]=='8') printf(" ");
			if(dig[x]=='8') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='8') printf(" ");

			if(dig[x]=='9') printf(" ");
			if(dig[x]=='9') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='9') printf(" ");

			space=1;
		}
		printf("\n");
		//4th part
		for(j=1;j<=n;j++)
		{
			space=0;
			for(x=0;x<len;x++)
			{
				if(space!=0) printf(" ");

				if(dig[x]=='0') printf("|");
				if(dig[x]=='0') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='0') printf("|");

				if(dig[x]=='1') printf(" ");
				if(dig[x]=='1') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='1') printf("|");

				if(dig[x]=='2') printf("|");
				if(dig[x]=='2') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='2') printf(" ");

				if(dig[x]=='3') printf(" ");
				if(dig[x]=='3') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='3') printf("|");

				if(dig[x]=='4') printf(" ");
				if(dig[x]=='4') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='4') printf("|");

				if(dig[x]=='5') printf(" ");
				if(dig[x]=='5') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='5') printf("|");

				if(dig[x]=='6') printf("|");
				if(dig[x]=='6') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='6') printf("|");

				if(dig[x]=='7') printf(" ");
				if(dig[x]=='7') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='7') printf("|");

				if(dig[x]=='8') printf("|");
				if(dig[x]=='8') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='8') printf("|");

				if(dig[x]=='9') printf(" ");
				if(dig[x]=='9') for(i=1;i<=n;i++) printf(" ");
				if(dig[x]=='9') printf("|");

				space=1;
			}
			printf("\n");
		}
		//5th part
		space=0;
		for(x=0;x<len;x++)
		{
			if(space!=0) printf(" ");

			if(dig[x]=='0') printf(" ");
			if(dig[x]=='0') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='0') printf(" ");

			if(dig[x]=='1') printf(" ");
			if(dig[x]=='1') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='1') printf(" ");

			if(dig[x]=='2') printf(" ");
			if(dig[x]=='2') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='2') printf(" ");

			if(dig[x]=='3') printf(" ");
			if(dig[x]=='3') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='3') printf(" ");

			if(dig[x]=='4') printf(" ");
			if(dig[x]=='4') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='4') printf(" ");

			if(dig[x]=='5') printf(" ");
			if(dig[x]=='5') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='5') printf(" ");

			if(dig[x]=='6') printf(" ");
			if(dig[x]=='6') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='6') printf(" ");

			if(dig[x]=='7') printf(" ");
			if(dig[x]=='7') for(i=1;i<=n;i++) printf(" ");
			if(dig[x]=='7') printf(" ");

			if(dig[x]=='8') printf(" ");
			if(dig[x]=='8') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='8') printf(" ");

			if(dig[x]=='9') printf(" ");
			if(dig[x]=='9') for(i=1;i<=n;i++) printf("-");
			if(dig[x]=='9') printf(" ");

			space=1;
		}
		printf("\n\n");
	}
	return 0;
}