// 13059 Tennis Championship

#include<stdio.h>

int main()
{
    long long int number;
    long long int match;

    while(scanf("%lld",&number)==1)
    {
        match = number - 1;
        printf("%lld\n",match);
    }
    return 0;
}
