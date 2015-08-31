//E. O: dah, dah, dah! (#11223)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in[2200],check[2200],dm[5];
	long i,j,len;
	long cas,c;

	scanf("%ld",&cas);gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(in);

		if(c>1) printf("\n");
		printf("Message #%ld\n",c);
		len=strlen(in);
		j=0;
		for(i=0;i<len;i++)
		{
			if(i>=1 && in[i]==' ' && in[i-1]==' ') printf(" ");
			else if(in[i]==' ' || i==len-1)
			{
				if(in[i]==' ') check[j]='\0';
				else if(i==len-1)
				{
					check[j]=in[i];
					j++;
					check[j]='\0';
				}
				j=0;
				//output the code
				if(strcmp(check,".-")==0) printf("A");
				else if(strcmp(check,"-...")==0) printf("B");
				else if(strcmp(check,"-.-.")==0) printf("C");
				else if(strcmp(check,"-..")==0) printf("D");
				else if(strcmp(check,".")==0) printf("E");
				else if(strcmp(check,"..-.")==0) printf("F");
				else if(strcmp(check,"--.")==0) printf("G");
				else if(strcmp(check,"....")==0) printf("H");
				else if(strcmp(check,"..")==0) printf("I");

				else if(strcmp(check,".---")==0) printf("J");
				else if(strcmp(check,"-.-")==0) printf("K");
				else if(strcmp(check,".-..")==0) printf("L");
				else if(strcmp(check,"--")==0) printf("M");
				else if(strcmp(check,"-.")==0) printf("N");
				else if(strcmp(check,"---")==0) printf("O");
				else if(strcmp(check,".--.")==0) printf("P");
				else if(strcmp(check,"--.-")==0) printf("Q");
				else if(strcmp(check,".-.")==0) printf("R");

				else if(strcmp(check,"...")==0) printf("S");
				else if(strcmp(check,"-")==0) printf("T");
				else if(strcmp(check,"..-")==0) printf("U");
				else if(strcmp(check,"...-")==0) printf("V");
				else if(strcmp(check,".--")==0) printf("W");
				else if(strcmp(check,"-..-")==0) printf("X");
				else if(strcmp(check,"-.--")==0) printf("Y");
				else if(strcmp(check,"--..")==0) printf("Z");
				else if(strcmp(check,"-----")==0) printf("0");

				else if(strcmp(check,".----")==0) printf("1");
				else if(strcmp(check,"..---")==0) printf("2");
				else if(strcmp(check,"...--")==0) printf("3");
				else if(strcmp(check,"....-")==0) printf("4");
				else if(strcmp(check,".....")==0) printf("5");
				else if(strcmp(check,"-....")==0) printf("6");
				else if(strcmp(check,"--...")==0) printf("7");
				else if(strcmp(check,"---..")==0) printf("8");
				else if(strcmp(check,"----.")==0) printf("9");

				else if(strcmp(check,".-.-.-")==0) printf(".");
				else if(strcmp(check,"--..--")==0) printf(",");
				else if(strcmp(check,"..--..")==0) printf("?");
				else if(strcmp(check,".----.")==0) printf("'");
				else if(strcmp(check,"-.-.--")==0) printf("!");
				else if(strcmp(check,"-..-.")==0) printf("/");
				else if(strcmp(check,"-.--.")==0) printf("(");
				else if(strcmp(check,"-.--.-")==0) printf(")");
				else if(strcmp(check,".-...")==0) printf("&");

				else if(strcmp(check,"---...")==0) printf(":");
				else if(strcmp(check,"-.-.-.")==0) printf(";");
				else if(strcmp(check,"-...-")==0) printf("=");
				else if(strcmp(check,".-.-.")==0) printf("+");
				else if(strcmp(check,"-....-")==0) printf("-");
				else if(strcmp(check,"..--.-")==0) printf("_");
				else if(strcmp(check,".-..-.")==0) printf("\"");
				else if(strcmp(check,".--.-.")==0) printf("@");

				//printf("%s?",check);
			}
			else
			{
				check[j]=in[i];
				j++;
			}
		}
		printf("\n");
	}

	return 0;
}