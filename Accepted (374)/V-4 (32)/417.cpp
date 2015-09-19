//Word Index (#417)
//Sadeq

#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

void create_ist();

string list[90000];

int main()
{
	char in[10];
	long found,i;
	string ch;
	create_ist();

	while(gets(in))
	{
		ch=in;
		found=0;
		for(i=1;i<=83681;i++)
		{
			if(ch==list[i])
			{
				printf("%d\n",i);
				found=1;
				break;
			}
		}
		if(found==0) printf("0\n");
	}
	return 0;
}

void create_ist()
{
	long a,b,c,d,e;
	long count=1;
	string t1,t2,t3,t4,t5;

	for(a=0;a<26;a++)
	{
		t1='a'+a;
		list[count]=t1;
		count++;
	}

	for(a=0;a<26;a++)
	{
		for(b=a+1;b<26;b++)
		{
			t1='a'+a;
			t2='a'+b;
			list[count]=t1+t2;
			count++;
		}
	}

	for(a=0;a<26;a++)
	{
		for(b=a+1;b<26;b++)
		{
			for(c=b+1;c<26;c++)
			{
				t1='a'+a;
				t2='a'+b;
				t3='a'+c;
				list[count]=t1+t2+t3;
				count++;
			}
		}
	}

	for(a=0;a<26;a++)
	{
		for(b=a+1;b<26;b++)
		{
			for(c=b+1;c<26;c++)
			{
				for(d=c+1;d<26;d++)
				{
					t1='a'+a;
					t2='a'+b;
					t3='a'+c;
					t4='a'+d;
					list[count]=t1+t2+t3+t4;
					count++;
				}
			}
		}
	}

	for(a=0;a<26;a++)
	{
		for(b=a+1;b<26;b++)
		{
			for(c=b+1;c<26;c++)
			{
				for(d=c+1;d<26;d++)
				{
					for(e=d+1;e<26;e++)
					{
						t1='a'+a;
						t2='a'+b;
						t3='a'+c;
						t4='a'+d;
						t5='a'+e;
						list[count]=t1+t2+t3+t4+t5;
						count++;
					}
				}
			}
		}
	}
}
