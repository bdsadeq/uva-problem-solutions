//Roman Digititis (#344)
//Sadeq

#include<stdio.h>

void unit(int n);
void ten(int n);
void hnd(int n);
void roman(int n);

int ii[200],v[200],x[200],l[200],c[200];
int num;

int main()
{
	int i;
	int sumii,sumv,sumx,suml,sumc;
	int in;

	//set all to zero
	for(i=0;i<=100;i++)
	{
		ii[i]=0;
		v[i]=0;
		x[i]=0;
		l[i]=0;
		c[i]=0;
	}

	//numbers count
	for(i=1;i<=100;i++)
	{
		num=i;
		roman(i);
	}

	//input
	while(scanf("%d",&in))
	{
		if(in==0) break;

		sumii=0;
		sumv=0;
		sumx=0;
		suml=0;
		sumc=0;

		for(i=1;i<=in;i++)
		{
			sumii=sumii+ii[i];
			sumv=sumv+v[i];
			sumx=sumx+x[i];
			suml=suml+l[i];
			sumc=sumc+c[i];
		}
		//output
		printf("%d: %d i, %d v, %d x, %d l, %d c\n",in,sumii,sumv,sumx,suml,sumc);
	}
	
	return 0;
}

void unit(int n)
{
	switch(n)
	{
	case 3: //printf("i");
			ii[num]=ii[num]+1;

	case 2: //printf("i");
			ii[num]=ii[num]+1;

	case 1: //printf("i");
			ii[num]=ii[num]+1;
			break;

	case 4: //printf("i");
			ii[num]=ii[num]+1;

	case 5: //printf("v");
			v[num]=v[num]+1;
			break;

	case 6: //printf("vi");
			v[num]=v[num]+1;
			ii[num]=ii[num]+1;
			break;

	case 7: //printf("vii");
			v[num]=v[num]+1;
			ii[num]=ii[num]+2;
			break;

	case 8: //printf("viii");
			v[num]=v[num]+1;
			ii[num]=ii[num]+3;
			break;

	case 9: //printf("ix");
			ii[num]=ii[num]+1;
			x[num]=x[num]+1;
			break;
	}
}

void ten(int n)
{
	switch(n)
	{
	case 3: //printf("x");
			x[num]=x[num]+1;

	case 2: //printf("x");
			x[num]=x[num]+1;

	case 1: //printf("x");
			x[num]=x[num]+1;
			break;

	case 4: //printf("x");
			x[num]=x[num]+1;

	case 5: //printf("l");
			l[num]=l[num]+1;
			break;

	case 6: //printf("lx");
			x[num]=x[num]+1;
			l[num]=l[num]+1;
			break;

	case 7: //printf("lxx");
			x[num]=x[num]+2;
			l[num]=l[num]+1;
			break;

	case 8: //printf("lxxx");
			x[num]=x[num]+3;
			l[num]=l[num]+1;
			break;

	case 9: //printf("xc");
			x[num]=x[num]+1;
			c[num]=c[num]+1;
			break;
	}
}

void hnd(int n)
{
	switch(n)
	{
	case 3: //printf("c");
			c[num]=c[num]+1;

	case 2: //printf("c");
			c[num]=c[num]+1;

	case 1: //printf("c");
			c[num]=c[num]+1;
			break;

	case 4: //printf("c");
			c[num]=c[num]+1;

	case 5: //printf("m");
			break;
	}
}

void roman(int n)
{
	n=n%500;
	hnd(n/100);
	n=n%100;
	ten(n/10);
	unit(n%10);
}
