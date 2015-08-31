//Deli Deli (#11233)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int a,b;
	int i,j;
	int fnd;
	int len;
	char mn[30][1000],rep[30][1000];
	char word[1000];
	char dm[5];


	while(scanf("%d %d",&a,&b)==2)
	{
		gets(dm);

		//take words
		for(i=0;i<a;i++)
		{
			scanf(" %s %s",&mn[i],rep[i]);
		}

		//take query
		for(i=0;i<b;i++)
		{
			scanf("%s",&word);

			//find in list
			fnd=0;
			for(j=0;j<a;j++)
			{
				if(strcmp(word,mn[j])==0)
				{
					fnd=1;
					printf("%s\n",rep[j]);
					break;
				}
			}

			//if not in list
			if(fnd==0)
			{
				len=strlen(word);

				if(len>1 && word[len-1]=='y' && word[len-2]!='a' && word[len-2]!='e'
					&& word[len-2]!='i' && word[len-2]!='o' && word[len-2]!='u')
				{
					word[len-1]='i';
					printf("%ses\n",word);
				}
				else if(word[len-1]=='o' || word[len-1]=='s' || word[len-1]=='x')
				{
					printf("%ses\n",word);
				}
				else if(word[len-1]=='h')
				{
					if(len>1 && word[len-2]=='c') printf("%ses\n",word);
					if(len>1 && word[len-2]=='s') printf("%ses\n",word);
				}
				else printf("%ss\n",word);
			}
		}
	}
	return 0;
}
