//Interpreter (#10033)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in[5],dm[5];
	long c,cas;
	long dig1,dig2,dig3;
	long inst;
	long reg[20],ram[1200];
	long halt,check,gto,i,j;


	scanf("%ld",&cas);gets(dm);gets(dm);
	for(c=1;c<=cas;c++)
	{
		for(i=0;i<20;i++) reg[i]=0;
		for(i=0;i<1200;i++) ram[i]=0;
		inst=0;
		j=0;
		while(gets(in))
		{
			if((strlen(in))==0) break;

			dig1=in[0]-'0';
			dig2=in[1]-'0';
			dig3=in[2]-'0';
			ram[j]=(dig1*100)+(dig2*10)+dig3;
			j++;
		}

		halt=0;
		check=0;
		gto=0;

		j=0;
		while(j<1000)
		{

			dig1=ram[j]/100;
			dig2=(ram[j]/10)%10;
			dig3=ram[j]%10;

			inst++;

			if(dig1==1)
			{
				halt=1;
			}
			else if(dig1==2)
			{
				reg[dig2]=dig3;
			}
			else if(dig1==3)
			{
				reg[dig2]=reg[dig2]+dig3;
				check=1;
			}
			else if(dig1==4)
			{
				reg[dig2]=reg[dig2]*dig3;
				check=1;
			}
			else if(dig1==5)
			{
				reg[dig2]=reg[dig3];
			}
			else if(dig1==6)
			{
				reg[dig2]=reg[dig2]+reg[dig3];
				check=1;
			}
			else if(dig1==7)
			{
				reg[dig2]=reg[dig2]*reg[dig3];
                check=1;
			}
			else if(dig1==8)
			{
				reg[dig2]=ram[reg[dig3]];
			}
			else if(dig1==9)
			{
				ram[reg[dig3]]=reg[dig2];
			}
			else if(dig1==0)
			{
				if(reg[dig3]!=0)
				{
					j=reg[dig2];
					gto=1;
				}
			}

			if(halt==1) break;
			if(check==1)
			{
                reg[dig2]=reg[dig2]%1000;
                check=0;
            }
			if(gto==1) gto=0;
            else j++;
		}

		if(c>1) printf("\n");
		printf("%ld\n",inst);
	}

	return 0;
}
