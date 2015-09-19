//Where's waldorf? (#10010)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int read(int a,int b);
char root[100][100];

int main()
{
	int cas,i,j,a,b,z,len,word;
	int line=0;
	char dm[5];

	//case number
	scanf("%d",&cas);
	for(z=1;z<=cas;z++)
	{
		if(line==1) printf("\n");
		line=1;

		//height and width
		scanf("%d %d",&a,&b);
		gets(dm);

		//taking texts
		for(i=0;i<a;i++)
		{
			gets(root[i]);
			len=strlen(root[i]);
			//convert all to uppercase
			for(j=0;j<len;j++) root[i][j]=toupper(root[i][j]);
		}

		//taking how many words
		scanf("%d",&word);
		gets(dm);

		for(j=1;j<=word;j++) read(a,b);
	}
	return 0;
}

int read(int a,int b)
{
	char in[100];
	int len,i,j,have,xx,yy,found,x;

	gets(in);
	len=strlen(in);
	//convert to uppercase
	for(i=0;i<len;i++) in[i]=toupper(in[i]);

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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
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
						printf("%d %d\n",i+1,j+1);
						found=1;
					}
				}
				if(found==1) break;
			}
			if(found==1) break;
		}
		if(found==1) break;
	}
	return 0;
}
