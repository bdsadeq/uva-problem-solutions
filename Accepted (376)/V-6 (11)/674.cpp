//Coin Change (#674)
//Sadeq

#include<iostream.h>

long nway[10001];
int coin[5]={50,25,10,5,1};

int main()
{
	int i,j,n,v,c;
	v=5;
	nway[0]=1;
	for(i=0;i<v;i++)
	{
		c=coin[i];
		for(j=c;j<=10001;j++)
		{
			nway[j]=nway[j]+nway[j-c];
		}
	}
	while(cin>>n!=0)
	{
		cout<<nway[n]<<endl;
	}
	return 0;
}