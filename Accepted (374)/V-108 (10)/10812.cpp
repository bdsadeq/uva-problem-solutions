//Beat the Spread! (#10812)
//Sadeq

#include<iostream.h>

int main()
{
	long int i,n,sum,dif,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>sum>>dif;
		if(sum>=dif && ((sum-dif)%2)==0)
		{
			temp=sum+dif;
			cout<<temp/2<<" "<<temp/2-dif<<endl;
		}
		else cout<<"impossible"<<endl;
	}
	return 0;
}