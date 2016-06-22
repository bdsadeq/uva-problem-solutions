//Decode the Mad man (#10222)
//Sadeq

#include<stdio.h>
#include<string.h>

#define X 1000000

int main()
{
	char ch[X];
	while(gets(ch))
	{
		int len=strlen(ch);
		for(int i=0;i<len;i++)
		{
			if(ch[i]==']') printf("p");
			else if(ch[i]=='[') printf("o");
			else if(ch[i]=='p') printf("i");
			else if(ch[i]=='o') printf("u");
			else if(ch[i]=='i') printf("y");
			else if(ch[i]=='u') printf("t");
			else if(ch[i]=='y') printf("r");
			else if(ch[i]=='t') printf("e");
			else if(ch[i]=='r') printf("w");
			else if(ch[i]=='e') printf("q");

			else if(ch[i]=='}') printf("P");
			else if(ch[i]=='{') printf("O");
			else if(ch[i]=='P') printf("I");
			else if(ch[i]=='O') printf("U");
			else if(ch[i]=='I') printf("Y");
			else if(ch[i]=='U') printf("T");
			else if(ch[i]=='Y') printf("R");
			else if(ch[i]=='T') printf("E");
			else if(ch[i]=='R') printf("W");
			else if(ch[i]=='E') printf("Q");

			else if(ch[i]==39) printf("l");
			else if(ch[i]==';') printf("k");
			else if(ch[i]=='l') printf("j");
			else if(ch[i]=='k') printf("h");
			else if(ch[i]=='j') printf("g");
			else if(ch[i]=='h') printf("f");
			else if(ch[i]=='g') printf("d");
			else if(ch[i]=='f') printf("s");
			else if(ch[i]=='d') printf("a");

			else if(ch[i]=='"') printf("L");
			else if(ch[i]==':') printf("K");
			else if(ch[i]=='L') printf("J");
			else if(ch[i]=='K') printf("H");
			else if(ch[i]=='J') printf("G");
			else if(ch[i]=='H') printf("F");
			else if(ch[i]=='G') printf("D");
			else if(ch[i]=='F') printf("S");
			else if(ch[i]=='D') printf("A");

			else if(ch[i]=='/') printf(",");
			else if(ch[i]=='.') printf("m");
			else if(ch[i]==',') printf("n");
			else if(ch[i]=='m') printf("b");
			else if(ch[i]=='n') printf("v");
			else if(ch[i]=='b') printf("c");
			else if(ch[i]=='v') printf("x");
			else if(ch[i]=='c') printf("z");

			else if(ch[i]=='?') printf("<");
			else if(ch[i]=='>') printf("M");
			else if(ch[i]=='<') printf("N");
			else if(ch[i]=='M') printf("B");
			else if(ch[i]=='N') printf("V");
			else if(ch[i]=='B') printf("C");
			else if(ch[i]=='V') printf("X");
			else if(ch[i]=='C') printf("Z");

			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}