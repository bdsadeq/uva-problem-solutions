//Banglawash (12700)
// 1 June 15

#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int CASE,C;
    int GAME,i;
    char match[200],dm[5];
    int BD,WWW,ABN,TIE;

    scanf("%d",&CASE);

    for(C=1; C<=CASE; C++)
    {
        scanf("%d",&GAME);
        gets(dm);
        gets(match);

        BD=WWW=ABN=TIE=0;

        for(i=0; i<strlen(match); i++)
        {
            if(match[i]=='B')
            {
                BD++;
            }
            else if(match[i]=='W')
            {
                WWW++;
            }
            else if(match[i]=='A')
            {
                ABN++;
            }
            else if(match[i]=='T')
            {
                TIE++;
            }
        }

        //process output
        printf("Case %d: ",C);
        if(BD>0 && BD+ABN==GAME)
        {
            printf("BANGLAWASH");
        }
        else if(WWW>0 && WWW+ABN==GAME)
        {
            printf("WHITEWASH");
        }
        else if(ABN==GAME)
        {
            printf("ABANDONED");
        }
        else if(BD==WWW && ABN!=GAME)
        {
            printf("DRAW %d %d",BD,TIE);
        }
        else if(BD>WWW)
        {
            printf("BANGLADESH %d - %d",BD,WWW);
        }
        else if(BD<WWW)
        {
            printf("WWW %d - %d",WWW,BD);
        }

        printf("\n");

    }


    return 0;
}
