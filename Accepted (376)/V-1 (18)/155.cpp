//All squares (#155)
//Sadeq

#include<stdio.h>

void square(int i,int j,int k);
int counter;
int num;
int x,y;

int main()
{
	int k;
	while(scanf("%d %d %d",&k,&x,&y))
	{
		if(k==0 && x==0 && y==0) break;
		k=2*k+1;
		num=0;
		counter=0;
		square(1024,1024,k);

		//output
		printf("%3d\n",counter);
	}
	return 0;
}

//here i,j is center point of square
void square(int i,int j,int k)
{
	//check for point
	if(x>=i-k/2 && x<=i+k/2 && y>=j-k/2 && y<=j+k/2) counter++;
	num++;
	if(k<=1) return;
	else
	{
		square(i-k/2,j-k/2,k/2);
		square(i-k/2,j+k/2,k/2);
		square(i+k/2,j-k/2,k/2);
		square(i+k/2,j+k/2,k/2);
	}
}
