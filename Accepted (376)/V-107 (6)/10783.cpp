//Odd Sum (#10783)
//Sadeq

#include<iostream.h>

int main()
{
	int a,b,sum,i,j,n;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>a>>b;
		sum=0;
		if((a%2)==0) a=a+1;
		if((b%2)==0) b=b-1;
		for(i=a;i<=b;i=i+2)
		{
			sum=sum+i;
		}
		cout<<"Case "<<j+1<<": "<<sum<<endl;
	}
	return 0;
}