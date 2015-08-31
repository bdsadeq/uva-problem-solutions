//Code Creator (#11483)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int cas,c,count=0;
	int len,i;
	char in[200],dm[5];
	
	while(scanf("%d",&cas))
	{
		gets(dm);
		if(cas==0) break;
		count++;

		//output
		printf("Case %d:\n",count);
		printf("#include<string.h>\n");
		printf("#include<stdio.h>\n");
		printf("int main()\n");
		printf("{\n");

		for(c=1;c<=cas;c++)
		{
			gets(in);
			len=strlen(in);
			printf("printf(%c",34);
			if(len>0)
			{
				for(i=0;i<len;i++)
				{
					if(in[i]==34 || in[i]==92) printf("\\%c",in[i]);
					else printf("%c",in[i]);
				}
				printf("\\n%c);",34);
				printf("\n");
			}
		}

		printf("printf(%c\\n%c);\n",34,34);
		printf("return 0;\n");
		printf("}\n");
	}
	return 0;
}
