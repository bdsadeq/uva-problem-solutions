// 12992 Huatuo’s Medicine

#include<stdio.h>

int main()
{
    int CASE, C, input;

    scanf("%d", &CASE);

    for(C=1; C<=CASE;C++){
        scanf("%d", &input);

        printf("Case #%d: %d\n", C, (input*2)-1);
    }


    return 0;
}
