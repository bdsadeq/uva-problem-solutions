//Language Detection (#12250)
//sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char inp[100];

	int cas=0;

	while(gets(inp))
	{
		if(strcmp(inp,"#")==0) break;

		cas++;

		if(strcmp(inp,"HELLO")==0) printf("Case %d: ENGLISH\n",cas);
		else if(strcmp(inp,"HOLA")==0) printf("Case %d: SPANISH\n",cas);
		else if(strcmp(inp,"HALLO")==0) printf("Case %d: GERMAN\n",cas);
		else if(strcmp(inp,"BONJOUR")==0) printf("Case %d: FRENCH\n",cas);
		else if(strcmp(inp,"CIAO")==0) printf("Case %d: ITALIAN\n",cas);
		else if(strcmp(inp,"ZDRAVSTVUJTE")==0) printf("Case %d: RUSSIAN\n",cas);
		else printf("Case %d: UNKNOWN\n",cas);
	}

	return 0;
}
