//12897 (Decoding Baby Boos)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int CASE,C;
    char INPUT[1000010];
    char TEMP[100];
    char DUMMY[5];
    int RPLC;
    int I,J;
    char REP,CHR;
    char *pch;

    scanf("%d",&CASE);
    gets(DUMMY);

    for(C=1;C<=CASE;C++)
    {
        gets(INPUT);

        //puts(INPUT);

        scanf("%d",&RPLC);
        gets(DUMMY);

        char R[128];
		for (int i = 0; i < 128; i++)
        {
            R[i] = i;
        }

        for(I=1;I<=RPLC;I++)
        {
            gets(TEMP);

            REP=TEMP[0];
            CHR=TEMP[2];

            for (int j = 'A'; j <= 'Z'; j++)
            {
                if (R[j] == CHR)
                {
                    R[j] = REP;
                }

            }



            //puts(INPUT);

        }
        //gets(DUMMY);
        for (int i = 0; INPUT[i]; i++)
        {
            putchar(R[INPUT[i]]);
            //printf("%d",i);
        }

        puts("");

        //printf("%s\n",INPUT);


    }

    return 0;
}
