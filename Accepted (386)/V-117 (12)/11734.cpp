//Big Number of Teams will Solve This (#11734)
//Sadeq

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	char team[100],judge[100];
	long i,len1,len2;
	vector<char> T,J;
	long cas,c,ans;

	scanf("%ld",&cas);gets(team);
	for(c=1;c<=cas;c++)
	{
		gets(team);
		gets(judge);
		T.clear();
		J.clear();

		if(strcmp(team,judge)==0)
		{
			printf("Case %ld: Yes\n",c);
		}
		else
		{
			len1=strlen(team);
			len2=strlen(judge);

			for(i=0;i<len1;i++)
			{
				if(team[i]!=' ') T.push_back(team[i]);
			}
			for(i=0;i<len2;i++)
			{
				if(judge[i]!=' ') J.push_back(judge[i]);
			}

			len1=T.size();
			len2=J.size();

			ans=0;
			if(len1==len2)
			{
				for(i=0;i<len2;i++)
				{
					if(J[i]!=T[i]) ans=1;
				}
			}
			else
			{
				ans=1;
			}

			if(ans==1)
			{
				printf("Case %ld: Wrong Answer\n",c);
			}
			else
			{
				printf("Case %ld: Output Format Error\n",c);
			}
		}
	}

	return 0;
}
