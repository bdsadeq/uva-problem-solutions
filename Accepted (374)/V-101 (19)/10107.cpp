//What is the Median? (#10107)
//Sadeq

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	int in[10001];
	int count=0;
	int temp;
	int ct;
	while(scanf("%d",&in[count])==1)
	{
		qsort(in,count+1,sizeof(int),compare);
		ct=count+1;
		if((ct%2)==1)
		{
			temp=((ct+1)/2)-1;
			printf("%d\n",in[temp]);
		}
		else
		{
			temp=(ct/2)-1;
			printf("%d\n",(in[temp]+in[temp+1])/2);
		}
		count++;
	}
	return 0;
}