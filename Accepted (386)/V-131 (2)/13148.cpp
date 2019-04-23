// 13148 - A Giveaway

// i am developing using a very slow algorithm :D

#include <stdio.h>

int main() {
    long long int input,i,square, cube, is_ordinary;

    while(1){
        scanf("%lld", &input);
        if(input==0){
            break;
        }

        square = 0;
        cube = 0;

        for (i=1;i<=10000;i++){
            if((i*i) == input){
                //printf("%lld\n",i);
                square = 1;
            }

            if((i*i*i) == input){
                //printf("%lld\n",i);
                cube = 1;
            }
        }

        if(square == 1 && cube==1){
            printf("Special\n");
        }else{
            printf("Ordinary\n");
        }
    }

    return 0;
}
