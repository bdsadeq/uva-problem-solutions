//Mischievous Children (#10338)
//Sadeq

#include<stdio.h>
#include<string.h>

long long fac(long long x)
{
	long long i;
	long long fac=1;
	if(x==1) return 1;
	else
	{
		for(i=1;i<=x;i++)
		{
			fac=fac*i;
		}
		return fac;
	}
}

int main()
{
	long long A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,result,len,cas,ii,jj;
	char text[25];
	scanf("%lld",&cas);
	for(ii=1;ii<=cas;ii++)
	{
		scanf("%s",&text);
		A=0;
		B=0;
		C=0;
		D=0;
		E=0;

		F=0;
		G=0;
		H=0;
		I=0;
		J=0;

		K=0;
		L=0;
		M=0;
		N=0;
		O=0;

		P=0;
		Q=0;
		R=0;
		S=0;
		T=0;

		U=0;
		V=0;
		W=0;
		X=0;
		Y=0;
		Z=0;
		len=strlen(text);
		for(jj=0;jj<len;jj++)
		{
			if(text[jj]=='A') A++;
			if(text[jj]=='B') B++;
			if(text[jj]=='C') C++;
			if(text[jj]=='D') D++;
			if(text[jj]=='E') E++;

			if(text[jj]=='F') F++;
			if(text[jj]=='G') G++;
			if(text[jj]=='H') H++;
			if(text[jj]=='I') I++;
			if(text[jj]=='J') J++;

			if(text[jj]=='K') K++;
			if(text[jj]=='L') L++;
			if(text[jj]=='M') M++;
			if(text[jj]=='N') N++;
			if(text[jj]=='O') O++;

			if(text[jj]=='P') P++;
			if(text[jj]=='Q') Q++;
			if(text[jj]=='R') R++;
			if(text[jj]=='S') S++;
			if(text[jj]=='T') T++;

			if(text[jj]=='U') U++;
			if(text[jj]=='V') V++;
			if(text[jj]=='W') W++;
			if(text[jj]=='X') X++;
			if(text[jj]=='Y') Y++;
			if(text[jj]=='Z') Z++;
		}

		result=fac(len)/(fac(A)*fac(B)*fac(C)*fac(D)*fac(E)*fac(F)*fac(G)*fac(H)*fac(I)*fac(J)*
			fac(K)*fac(L)*fac(M)*fac(N)*fac(O)*fac(P)*fac(Q)*fac(R)*fac(S)*fac(T)*
			fac(U)*fac(V)*fac(W)*fac(X)*fac(Y)*fac(Z));

		printf("Data set %lld: %lld\n",ii,result);
	}
	return 0;
}