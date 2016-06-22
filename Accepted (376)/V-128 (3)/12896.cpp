//Mobile SMS (12896)
//1 June 2015

#include<stdio.h>

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int CASE,C;
    int PRESS;
    int list[200];
    int FINAL;

    char one[]= {'.',',','?','"'};
    char two[]= {'a','b','c'};
    char three[]= {'d','e','f'};
    char four[]= {'g','h','i'};
    char five[]= {'j','k','l'};

    char six[]= {'m','n','o'};
    char seven[]= {'p','q','r','s'};
    char eight[]= {'t','u','v'};
    char nine[]= {'w','x','y','z'};

    scanf("%d",&CASE);
    int i;

    for(C=1; C<=CASE; C++)
    {
        scanf("%d",&PRESS);

        for(i=0; i<PRESS; i++)
        {
            scanf("%d",&list[i]);
        }

        for(i=0; i<PRESS; i++)
        {
            scanf("%d",&FINAL);
            FINAL--;

            if(list[i]==1)
            {
                printf("%c",one[FINAL]);
            }
            else if(list[i]==2)
            {
                printf("%c",two[FINAL]);
            }
            else if(list[i]==3)
            {
                printf("%c",three[FINAL]);
            }
            else if(list[i]==4)
            {
                printf("%c",four[FINAL]);
            }
            else if(list[i]==5)
            {
                printf("%c",five[FINAL]);
            }
            else if(list[i]==6)
            {
                printf("%c",six[FINAL]);
            }
            else if(list[i]==7)
            {
                printf("%c",seven[FINAL]);
            }
            else if(list[i]==8)
            {
                printf("%c",eight[FINAL]);
            }
            else if(list[i]==9)
            {
                printf("%c",nine[FINAL]);
            }else if(list[i]==0)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
