//12136 Schedule of a Married Man
//Sadeq

#include<stdio.h>
#include<string.h>

long get_time(char str[])
{
    long ret;

    ret=(((str[0]-'0')*10+(str[1]-'0'))*60)+((str[3]-'0')*10+(str[4]-'0'));

    return ret;
}


int main()
{
    //freopen("in.txt","r",stdin);

    int CASE,T;
    long w_h1,w_m1,w_h2,w_m2,w_start,w_end;
    long m_h1,m_m1,m_h2,m_m2,m_start,m_end;
    long C[5];
    char input1[100],input2[100],input3[100],input4[100];
    long tmp;

    scanf("%d",&CASE);

    for(T=1; T<=CASE; T++)
    {
        //scanf("%2ld%[^:]%2ld %2ld%[^:]%2ld",&w_h1,&C,&w_m1,&w_h2,&C,&w_m2);
        scanf("%s %s",&input1,&input2);
        scanf("%s %s",&input3,&input4);

        w_start=get_time(input1); //w_h1*60+w_m1;
        //printf("%d ",w_start);
        w_end=get_time(input2);

        if(w_end<w_start)
        {
            w_end=w_end+720;
        }

        m_start=get_time(input3);//m_h1*60+m_m1;
        m_end=get_time(input4);//m_h2*60+m_m2;

        if(m_end<m_start)
        {
            m_end=m_end+720;
        }

        //printf("%s %s === ",input1,input2);

        //printf("%ld-%ld-%ld-%ld :::",w_h1,w_m1,w_h2,w_m2);

        //process output
        if(m_start>=w_start && m_start<=w_end)
        {
            printf("Case %d: Mrs Meeting\n",T);
        }
        else if(w_start>=m_start && w_start<=m_end)
        {
            printf("Case %d: Mrs Meeting\n",T);
        }
        else
        {
            printf("Case %d: Hits Meeting\n",T);
        }

    }

    return 0;
}
