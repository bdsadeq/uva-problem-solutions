//12952 Tri-du

#include<stdio.h>

int main()
{
    int num1,num2;

    while(scanf("%d %d",&num1,&num2)==2)
    {

        if(num1==num2)
        {
            printf("%d\n",num1);
        }

        else if(num1>num2)
        {
            printf("%d\n",num1);
        }
        else
        {
            printf("%d\n",num2);
        }

    }

    return 0;
}


