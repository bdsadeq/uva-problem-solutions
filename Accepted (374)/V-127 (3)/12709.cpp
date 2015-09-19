//12709 Falling Ants
//Sadeq

#include<stdio.h>

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int T,CASE;
    double L,W,H;
    double G=9.82;
    double volume,temp_volume,ans;
    double acc,temp_acc;


    while(1)
    {
        scanf("%d",&CASE);

        if(CASE==0)
        {
            break;
        }

        temp_volume=0.0;
        temp_acc=0.0;

        for(T=1; T<=CASE; T++)
        {
            scanf("%lf %lf %lf",&L,&W,&H);
            volume=L*W*H;
            acc=G-(G/(2*H));
            //printf("%.0lf-%.0lf=",acc,volume);

            if(acc>temp_acc)
            {
                temp_volume=volume;
                ans=temp_volume;
                temp_acc=acc;
            }
            else if(acc==temp_acc)
            {
                if(volume>=temp_volume)
                {
                    temp_volume=volume;
                    ans=temp_volume;
                }
            }
            //printf("X%.0lf-%.0lf=",temp_acc,temp_volume);

        }

        printf("%.0lf\n",ans);
    }


    return 0;
}
