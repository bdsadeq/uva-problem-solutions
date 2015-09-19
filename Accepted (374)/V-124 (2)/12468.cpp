//Zapping (#12468)
//sadeq

#include<stdio.h>

int main()
{
	int a,b;
	int ans1,ans2,ans3,ans4;

	while(scanf("%d %d",&a,&b))
	{
		if(a==-1 && b==-1)
		{
			break;
		}

		ans1=b-a;
		ans2=100+a-b;
		ans3=a-b;
		ans4=100+b-a;

		int min=99;

		if(ans1>=0 && ans1<=min)
		{
			min=ans1;
		}

		if(ans2>=0 && ans2<=min)
		{
			min=ans2;
		}

		if(ans3>=0 && ans3<=min)
		{
			min=ans3;
		}

		if(ans4>=0 && ans4<=min)
		{
			min=ans4;
		}


		printf("%d\n",min);

		
	}

	return 0;
}
