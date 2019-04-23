//Zeros and ones (#10324)
//Sadeq

#include<stdio.h>
#include<string.h>

char in[1000100];

int main()
{
	//freopen("in.txt","r",stdin);
	int count=0,len,i;
	int cas,cc;
	int A,B;
	int temp;

	while(gets(in))
	{
		//puts(in);
		if(strcmp(in,"0 0")==0)
		{
			break;
		}

		len=strlen(in);

		count++;
		scanf("%d",&cas);
		printf("Case %d:\n",count);

		for(cc=1; cc<=cas; cc++)
		{
			scanf("%d %d",&A,&B);

			if(B<A)
			{
				temp=B;
				B=A;
				A=temp;
			}

			if((B-A)<=1)
			{
				printf("Yes\n");
			}
			else
			{
				temp=0;
				for(i=A+1;i<=B;i++)
				{
					if(in[A]!=in[i])
					{
						temp=-1;
						printf("No\n");
						break;
					}
				}
				if(temp!=-1)
				{
					printf("Yes\n");
				}
			}
		}

		gets(in);
	}
	return 0;
}
