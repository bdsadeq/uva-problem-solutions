//Hashmat the brave warrior (#10055)
//Sadeq

#include<iostream.h>

int main()
{
	long long int has,op;
	while((cin>>has>>op)!=0)
	{
		if(has>op) cout<<has-op<<endl;
		else cout<<op-has<<endl;
	}
	return 0;
}