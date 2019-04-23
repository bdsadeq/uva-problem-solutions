// 13012 Identifying tea

#include<stdio.h>

int main()
{
    int Type, Selection[5];
    int Ans;

    while(scanf("%d %d %d %d %d %d",&Type, &Selection[0],&Selection[1],&Selection[2],&Selection[3],&Selection[4])==6)
    {
        Ans=0;
        for(int i=0; i<5; i++)
        {
            if(Selection[i]==Type)
            {
                Ans++;
            }
        }

        printf("%d\n",Ans);

    }




    return 0;
}
