//Evaluating Simple C Expressions (#327)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char main[500],in[500],innew[500];
	char list[50];
	long total[50],value[50];
	long len,sum,ch;
	long i,j,temp;

	while(gets(main))
	{
		len=strlen(main);

		//omit all space
		j=0;
		for(i=0;i<len;i++)
		{
			if(main[i]!=' ')
			{
				in[j]=main[i];
				j++;
			}
		}
		in[j]='\0';

		//calculate
		sum=0;
		ch=0;
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(in[i]>='a' && in[i]<='z')
			{
				ch++;
				temp=in[i]-'a';

				list[ch]=in[i];

				if(in[i-1]=='+' && in[i-2]=='+')
				{
					value[ch]=temp+2;
					total[temp]=temp+2;
					in[i-1]='0';
					in[i-2]='0';
				}

				else if(in[i+1]=='+' && in[i+2]=='+')
				{
					value[ch]=temp+2;
					total[temp]=temp+1;
					in[j+1]='0';
					in[i+2]='0';
				}

				else if(in[i-1]=='+' && in[i-2]=='+')
				{
					value[ch]=temp+2;
					total[temp]=temp+2;
					in[i+1]='0';
					in[i+2]='0';
				}

				else if(in[i-1]=='-' && in[i-2]=='-')
				{
					value[ch]=temp;
					total[temp]=temp;
					in[i-1]='0';
					in[i-2]='0';
				}

				else if(in[i+1]=='-' && in[i+2]=='-')
				{
					value[ch]=temp;
					total[temp]=temp+1;
					in[i+1]='0';
					in[i+2]='0';
				}

				else
				{
					value[ch]=temp+1;
					total[temp]=temp+1;
				}
			}
		}

		//create new list
		j=0;
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(in[i]!='0')
			{
				innew[j]=in[i];
				j++;
			}
		}
		innew[j]='\0';

		//find total
		sum=0;
		len=strlen(innew);
		for(i=0;i<len;i++)
		{
			if(innew[i]>='a' && innew[i]<='z')
			{
				temp=innew[i]-'a';

				if(innew[i-1]=='-') sum=sum-total[temp];
				else sum=sum+total[temp];
			}
		}

		//output
		printf("Expression: %s\n",main);
		printf("    value = %d\n",sum);

		for(i='a';i<='z';i++)
		{
			for(j=1;j<=ch;j++)
			{
				if(i==list[j])
				{
					printf("    %c = %d\n",list[j],value[j]);
					break;
				}
			}
		}
	}

	return 0;
}
