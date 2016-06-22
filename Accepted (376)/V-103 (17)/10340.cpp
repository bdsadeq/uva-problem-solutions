//All in All (#10340)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100000],b[100000];
	long alen,blen,tag,rana;
	long i,j,k;
	while(scanf("%s %s",&a,&b)!=EOF)
	{
		rana=0;
		k=0;
		alen=strlen(a);
		blen=strlen(b);
		for(i=0;i<alen;i++)
		{
			tag=0;
			for(j=k;j<blen;j++)
			{
				if(a[i]==b[j])
				{
					tag=1;
					k=j+1;
					break;
				}
			}
			if(tag==1) rana++;
		}
		if(rana==alen) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}