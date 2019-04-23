// 13216 Problem with a ridiculously long name but with a ridiculously short description

// solve with the help of others code

#include <bits/stdc++.h>
using namespace std;

int f[1024] = {1}, tail = 0, cycle = 1;

void preCalculation()
{
    int c[128] = {};
    int x = 1;
    for (int i = 1; ; i++)
    {
        x = (x*66)%100;
        f[i] = x;
        if (c[x])
        {
            tail = c[x]-1, cycle = i - c[x];
            break;
        }
        c[x] = i;
    }
}

int main()
{
    preCalculation();
    int CASE;
    char N[1024];
    scanf("%d", &CASE);
    while (CASE--)
    {
        scanf("%s", N);
        int n = strlen(N);
        if (n < 2)
        {
            int x;
            sscanf(N, "%d", &x);
            if (x <= 1)
                printf("%d\n", f[x]);
            else
                printf("%d\n", f[(x-2)%5+2]);
            continue;
        }

        int t = (N[n-1]-'0'+3)%5;
        printf("%d\n", f[t+2]);
    }
    return 0;
}
