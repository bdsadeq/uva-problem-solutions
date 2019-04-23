//Prime words (#10924)
//Sadeq

#include<stdio.h>
#include<string.h>

long is_prime(long n);

int main()
{
	char in[30];
	long i,len,number,prime;
	while(gets(in))
	{
		len=strlen(in);
		number=0;
		for(i=0;i<len;i++)
		{
			//check small letters
			if(in[i]=='a') number=number+1;
			if(in[i]=='b') number=number+2;
			if(in[i]=='c') number=number+3;
			if(in[i]=='d') number=number+4;
			if(in[i]=='e') number=number+5;

			if(in[i]=='f') number=number+6;
			if(in[i]=='g') number=number+7;
			if(in[i]=='h') number=number+8;
			if(in[i]=='i') number=number+9;
			if(in[i]=='j') number=number+10;

			if(in[i]=='k') number=number+11;
			if(in[i]=='l') number=number+12;
			if(in[i]=='m') number=number+13;
			if(in[i]=='n') number=number+14;
			if(in[i]=='o') number=number+15;

			if(in[i]=='p') number=number+16;
			if(in[i]=='q') number=number+17;
			if(in[i]=='r') number=number+18;
			if(in[i]=='s') number=number+19;
			if(in[i]=='t') number=number+20;

			if(in[i]=='u') number=number+21;
			if(in[i]=='v') number=number+22;
			if(in[i]=='w') number=number+23;
			if(in[i]=='x') number=number+24;
			if(in[i]=='y') number=number+25;
			if(in[i]=='z') number=number+26;

			//check capital letter
			if(in[i]=='A') number=number+27;
			if(in[i]=='B') number=number+28;
			if(in[i]=='C') number=number+29;
			if(in[i]=='D') number=number+30;
			if(in[i]=='E') number=number+31;

			if(in[i]=='F') number=number+32;
			if(in[i]=='G') number=number+33;
			if(in[i]=='H') number=number+34;
			if(in[i]=='I') number=number+35;
			if(in[i]=='J') number=number+36;

			if(in[i]=='K') number=number+37;
			if(in[i]=='L') number=number+38;
			if(in[i]=='M') number=number+39;
			if(in[i]=='N') number=number+40;
			if(in[i]=='O') number=number+41;

			if(in[i]=='P') number=number+42;
			if(in[i]=='Q') number=number+43;
			if(in[i]=='R') number=number+44;
			if(in[i]=='S') number=number+45;
			if(in[i]=='T') number=number+46;

			if(in[i]=='U') number=number+47;
			if(in[i]=='V') number=number+48;
			if(in[i]=='W') number=number+49;
			if(in[i]=='X') number=number+50;
			if(in[i]=='Y') number=number+51;
			if(in[i]=='Z') number=number+52;
		}
		//check the number for prime
		prime=is_prime(number);
		//output
		if(prime==1) printf("It is a prime word.\n");
		if(prime==0) printf("It is not a prime word.\n");
	}
	return 0;
}

long is_prime(long n)
{
	long i;
	if(n==1) return 1;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}