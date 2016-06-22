//The Base-1 Number System (#11398)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	char in[50];
	vector<long> bin;
	long len,flag,n,i;
	long dec;

	while(1)
	{
		bin.clear();
		while(scanf("%s",&in))
		{
			if(in[0]=='#') break;
			if(in[0]=='~') goto end;
			len=strlen(in);

			if(len==1 && in[0]=='0') flag=1;
			else if(len==2 && in[0]=='0' && in[1]=='0') flag=0;

			if(len>2)
			{
				n=len-2;
				for(i=1;i<=n;i++)
				{
					bin.push_back(flag);
				}
			}
		}

		//covert to dec;
		dec=0;
		for(i=0;i<bin.size();i++)
		{
			dec=dec+(bin[i]*pow(2,bin.size()-i-1));

			//printf("%ld",bin[i]);
		}
		printf("%ld\n",dec);
	}

	end:
	return 0;
}
