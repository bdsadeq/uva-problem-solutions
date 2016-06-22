//12210 A Match Making Problem
//Sadeq

#include<stdio.h>
#include<algorithm>
using namespace std;

bool wayToSort(int i, int j)
{
    return i > j;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int B,S;
    int bArr[10100];
    int sArr[10100];
    int i,j;
    int CASE=0;

    while(scanf("%d %d",&B,&S))
    {
        if(B==0 && S==0)
        {
            break;
        }
        CASE++;


        for(i=0; i<B; i++)
        {
            scanf("%d",&bArr[i]);
        }

        sort(bArr,bArr+B,wayToSort);

        for(i=0; i<S; i++)
        {
            scanf("%d",&sArr[i]);
        }




        if(B<=S)
        {
            printf("Case %d: 0\n",CASE);
        }
        else
        {
//            for(i=0; i<B; i++)
//            {
//                printf("%d ",bArr[i]);
//            }
//            printf("\n");

            printf("Case %d: %d %d\n",CASE,B-S,bArr[B-1]);
        }


    }

    return 0;
}
