//Behold My Quadrangle (#11455)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,c;
	long in1,in2,in3,in4,prmt;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld %ld %ld %ld",&in1,&in2,&in3,&in4);

		//output
		prmt=in1+in2+in3+in4;
		if(in1==in2 && in2==in3 && in3==in4)
		{
			printf("square\n");
		}
		else if((in1==in2 && in3==in4) || (in1==in3 && in2==in4) || (in1==in4 && in2==in3))
		{
			printf("rectangle\n");
		}
		else if(in1<(prmt/2) && in2<(prmt/2) && in3<(prmt/2) && in4<(prmt/2))
		{
			printf("quadrangle\n");
		}
		else
		{
			printf("banana\n");
		}
	}

	return 0;
}
