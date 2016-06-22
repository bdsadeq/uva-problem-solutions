//Automated Checking Machine (12854)
//1 June 2015

#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    char input1[10],input2[10];

    while(gets(input1))
    {
        gets(input2);

        int found=1;

        for(int i=0; i<strlen(input1); i++)
        {
            if(input1[i]=='1' && input2[i]=='1')
            {
                found=0;
                break;
            }
            else if(input1[i]=='0' && input2[i]=='0')
            {
                found=0;
                break;
            }
        }



        if((found)==1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }

    }

    return 0;
}


