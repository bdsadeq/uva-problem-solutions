//The Huge One (#11344)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	long ans,s,list[20];
	long i,j,len,temp,rem;
	char in[1100],dm[5];

	//input
	scanf("%ld",&cas);gets(dm);

	for(c=1;c<=cas;c++)
	{
		gets(in);
		scanf("%ld",&s);
		for(i=0;i<s;i++)
		{
			scanf("%ld",&list[i]);
		}
		gets(dm);

		//calculation
		ans=1;
		len=strlen(in);
		for(i=0;i<s;i++)
		{
			rem=(in[0]-'0')%list[i];
			for(j=1;j<len;j++)
			{
				temp=(rem*10)+(in[j]-'0');
				rem=temp%list[i];
			}
			if(rem!=0) ans=0;
			if(ans==0) break;
		}

		//output
		if(ans==1) printf("%s - Wonderful.\n",in);
		else if(ans==0) printf("%s - Simple.\n",in);
	}
	return 0;
}


