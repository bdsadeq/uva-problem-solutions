//Abstract Names (#11713)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,c,ans,i;
	char in1[30],in2[30];
	long len1,len2;

	scanf("%ld",&cas);gets(in1);

	for(c=1;c<=cas;c++)
	{
		gets(in1);
		gets(in2);
		len1=strlen(in1);
		len2=strlen(in2);

		ans=1;

		if(len1!=len2)
		{
			ans=0;
		}
		else
		{
			for(i=0;i<len1;i++)
			{
				if(in1[i]=='a' || in1[i]=='e' || in1[i]=='i' || in1[i]=='o' || in1[i]=='u')
				{
					if(!(in2[i]=='a' || in2[i]=='e' || in2[i]=='i' || in2[i]=='o' || in2[i]=='u'))
					{
						ans=0;
					}
				}
				else if(in1[i]!=in2[i])
				{
						ans=0;
				}
			}
		}

		if(ans==1) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
