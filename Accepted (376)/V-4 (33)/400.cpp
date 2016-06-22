/*
UNIX IS #400
*/


#include<stdio.h>
#include<string.h>
#include <algorithm>

using namespace std;

void fill_with_space(char FileName[],int TotalCharacter)
{
    int Len=strlen(FileName);
    printf("%s",FileName);

    for(int i=Len; i<TotalCharacter; i++)
    {
        printf(" ");
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    char FileList[200][200],Dummy[5],temp[200];
    int N;
    int i,j;
    int MaxLength,Len;
    int MaxFileInColumn;
    int NumberOfLine;

    while(scanf("%d",&N)==1)
    {
        gets(Dummy);

        //take input
        MaxLength=0;
        for(i=0; i<N; i++)
        {
            gets(FileList[i]);
            Len=strlen(FileList[i]);
            if(MaxLength<Len)
            {
                MaxLength=Len;
            }
        }

        MaxFileInColumn=62/(MaxLength+2);
        NumberOfLine=1 + ((N- 1) / MaxFileInColumn);

        //debug code
        //printf("%d %d %d\n",MaxLength, MaxFileInColumn,NumberOfLine);

        //sorting

        for(i=0; i<N-1; i++)
        {

            for(j=i+1; j<N; j++)
            {
                if(strcmp(FileList[i],FileList[j])>0)
                {
                    strcpy(temp,FileList[i]);
                    strcpy(FileList[i],FileList[j]);
                    strcpy(FileList[j],temp);
                }
            }
        }


        //output
        printf("------------------------------------------------------------\n");
        int Counter=1;
        for(i=0; i<NumberOfLine; i++)
        {
            for(j=0; j<MaxFileInColumn; j++)
            {
                //printf("%s",FileList[i]);
                Counter=(j*NumberOfLine)+i;
                if(Counter<N)
                {
                    fill_with_space(FileList[Counter],MaxLength);
                    if(j!=MaxFileInColumn-1)
                    {
                        printf("  ");
                    }
                }

            }
            printf("\n");

        }

    }

    return 0;
}
