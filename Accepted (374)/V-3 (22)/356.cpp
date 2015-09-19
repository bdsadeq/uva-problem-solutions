//Square Pegs And Round Holes (#356)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long n,seg,com,t1,t2,temp,temp2;
	long i,j;
	int line=0;
	while(scanf("%ld",&n)==1)
	{
		if(line==1) printf("\n");
		line=1;

		//calculation
		seg=(8*n)-4;
		temp=(4*(n*n-n))+1;
		t1=0;
		t2=0;

		for(i=n-1;i>0;i--)
		{
			temp2=i*i;
			if((temp2*8)>=temp) t1++;
			else break;
			for(j=i-1;j>0;j--)
			{
				if(((temp2+(j*j))*4)>=temp) t2++;
				else break;
			}
		}

		com=4*(n*n-t1-2*(t2+n)+1);

		//output
		printf("In the case n = %ld, %ld cells contain segments of the circle.\n",n,seg);
		printf("There are %ld cells completely contained in the circle.\n",com);
	}
	return 0;
}
