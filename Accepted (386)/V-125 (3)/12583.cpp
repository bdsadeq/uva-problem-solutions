//12583 Memory Overflow
//Sadeq

#include<stdio.h>
#include<string.h>

void test(int *str)
{
    for(int i=0; i<26; i++)
    {
        printf("%c%d,",i+'A',str[i]);
    }
    printf("\n");
}

int main()
{
    //freopen("in.txt","r",stdin);

    int T,CASE;
    int N,K;
    char name[1000];
    int arr[30];
    int i,len,j;
    int ans;

    scanf("%d",&CASE);

    for(T=1; T<=CASE; T++)
    {
        scanf("%d %d %s",&N,&K,name);

        //initialize all
        for(i=0; i<26; i++)
        {
            arr[i]=0;
        }

        //test(arr);


        ans=0;
        for(i=0; i<N; i++)
        {
            //recongnization count
            if(arr[name[i]-'A']>0)
            {
                ans++;
            }

            //decrement by 1
            for(j=0; j<26; j++)
            {
                if(arr[j]>0)
                {
                    arr[j]--;
                }
            }

            arr[name[i]-'A']=K;
        }
        //test(arr);



        printf("Case %d: %d\n",T,ans);
    }

    return 0;
}

