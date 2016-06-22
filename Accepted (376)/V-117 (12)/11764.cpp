//Jumping Mario (#11764)
//Sadeq

#include<stdio.h>

int main()
{
	int h,l,n,arr[100];
	int cas,c,i;

	scanf("%d",&cas);

	for(c=1;c<=cas;c++)
	{
		scanf("%d",&n);
		h=0;
		l=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		//calculation
		for(i=0;i<n-1;i++)
		{
			if(arr[i]<arr[i+1]) h++;
			if(arr[i]>arr[i+1]) l++;
		}

		//output
		printf("Case %d: %d %d\n",c,h,l);
	}

	return 0;
}
