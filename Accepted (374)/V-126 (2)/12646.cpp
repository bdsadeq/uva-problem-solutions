//Zero or One (12646)

#include<stdio.h>

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","r",stdout);


    int A,B,C;

    while(scanf("%d %d %d",&A,&B,&C)==3)
    {
        if(A==0 && B==0 && C==0)
        {
            printf("*");
        }
        else if(A==0 && B==0 && C==1)
        {
            printf("C");
        }
        else if(A==0 && B==1 && C==0)
        {
            printf("B");
        }
        else if(A==0 && B==1 && C==1)
        {
            printf("A");
        }
        else if(A==1 && B==0 && C==0)
        {
            printf("A");
        }
        else if(A==1 && B==0 && C==1)
        {
            printf("B");
        }
        else if(A==1 && B==1 && C==0)
        {
            printf("C");
        }
        else if(A==1 && B==1 && C==1)
        {
            printf("*");
        }


        printf("\n");

    }


    return 0;

}
