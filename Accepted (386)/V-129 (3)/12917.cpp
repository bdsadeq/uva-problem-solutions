// 12917 Prop hunt!

#include<stdio.h>

int main()
{
    int P,H,O;

    while(scanf("%d %d %d", &P, &H, &O)==3)
    {
        if((O-P)>=H)
        {
            printf("Props win!\n");
        }
        else
        {
            printf("Hunters win!\n");
        }
    }

    return 0;
}
