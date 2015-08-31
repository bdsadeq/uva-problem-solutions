//Formula 1 (#11056)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char name[110][25],tempname[25];
	long long i,j;
	long long num,time[110];
	long long mn,sec,ms,totms,temp;

	while(scanf("%ld",&num)==1)
	{
		//take input
		for(i=0;i<num;i++)
		{
			scanf("%s : %lld min %lld sec%lld ms",&name[i],&mn,&sec,&ms);
			totms=(((60*mn)+sec)*1000)+ms;
			time[i]=totms;
		}

		//sort them
		for(i=0;i<num-1;i++)
		{
			for(j=i+1;j<num;j++)
			{
				if(time[i]>time[j])
				{
					temp=time[i];
					time[i]=time[j];
					time[j]=temp;

					strcpy(tempname,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],tempname);
				}
				else if(time[i]==time[j])
				{
					//if(strcmp(name[i],name[j])>0)
					//for linux c
					if(strcasecmp(name[i],name[j])>0)
					{
						temp=time[i];
						time[i]=time[j];
						time[j]=temp;

						strcpy(tempname,name[i]);
						strcpy(name[i],name[j]);
						strcpy(name[j],tempname);
					}
				}
			}
		}

		//output
		for(i=0;i<num;i++)
		{
			if(i%2==0) printf("Row %lld\n",(i+2)/2);
			printf("%s\n",name[i]);
		}
		printf("\n");
	}

	return 0;
}
