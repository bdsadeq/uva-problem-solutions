// 13275 Leap Birthdays

#include<stdio.h>


bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main(){
    int CASE, C;
    int D, M, Y, QY;
    int answer;
    int yearCheck;

    scanf("%d", &CASE);

    for (C=1;C<=CASE;C++){
        scanf("%d %d %d %d", &D, &M, &Y, &QY);
        answer = 0;

        for (yearCheck = Y+1; yearCheck <= QY; yearCheck++){
            if(D==29 && M==2 && isLeapYear(yearCheck)==true){
                answer++;
            }

            if(D!=29 || M!=2){
                answer++;
            }
        }

        printf("Case %d: %d\n", C, answer);
    }


    return 0;
}
