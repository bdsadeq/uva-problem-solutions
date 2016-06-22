//Word-Search Wonder (#422)
//Sadeq

#include<stdio.h>
#include<string.h>

int read(int a,int b);
char root[200][200];

int main()
{
	int i,a,len;
	int result;
	char dm[5];
	while(scanf("%d",&a)==1)
	{
		gets(dm);

		//taking texts
		for(i=0;i<a;i++)
		{
			gets(root[i]);
			len=strlen(root[i]);
		}

		//take words
		while(1)
		{
			result=read(a,a);
			if(result==0) break;
			if(result==-1) printf("Not found\n");
		}
	}
	return 0;
}

int read(int a,int b)
{
	char in[200];
	int len,i,j,have,xx,yy,found,x;

	gets(in);
	len=strlen(in);
	if(len==1 && in[0]=='0') return 0;

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			found=0;
			if(root[i][j]==in[0])
			{
				//check right
				if(len<=(b-j+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						yy++;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i+1,j+len);
						found=1;
					}
				}
				if(found==1) break;

				//check right down
				if(len<=(b-j+1) && len<=(a-i+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						xx++;
						yy++;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i+len,j+len);
						found=1;
					}
				}
				if(found==1) break;

				//check down
				if(len<=(a-i+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						xx++;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i+len,j+1);
						found=1;
					}
				}
				if(found==1) break;

				//check left down
				if(len<=(j+1) && len<=(a-i+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						xx++;
						yy--;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i+len,j-len);
						found=1;
					}
				}
				if(found==1) break;

				//check left
				if(len<=(j+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						yy--;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i+1,j-len+2);
						found=1;
					}
				}
				if(found==1) break;

				//check left up
				if(len<=(j+1) && len<=(i+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						xx--;
						yy--;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i-len+2,j-len+2);
						found=1;
					}
				}
				if(found==1) break;

				//check up
				if(len<=(i+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						xx--;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i-len+2,j+1);
						found=1;
					}
				}
				if(found==1) break;

				//check up right
				if(len<=(i+1) && len<=(b-j+1))
				{
					have=1;
					xx=i;
					yy=j;
					for(x=0;x<len;x++)
					{
						if(in[x]!=root[xx][yy])
						{
							have=0;
							break;
						}
						xx--;
						yy++;
					}
					if(have==1)
					{
						printf("%d,%d %d,%d\n",i+1,j+1,i-len+2,j+len);
						found=1;
					}
				}
				if(found==1) break;
			}
			if(found==1) break;
		}
		if(found==1) break;
	}
	if(found==0) return -1;
}
