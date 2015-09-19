//The Collatz Sequence (#694)
//Sadeq

#include<iostream.h>

int main()
{
	long long int x,y,max,j,t,cs=0;
	while(cin>>x>>y)
	{
		if(x<0 && y<0) break;
		cs++;
		j=0;
		max=0;
		t=x;
		for(;;)
		{
			if(t>y) break;
			j++;
			if(t==1) break;
			if((t%2)==0) t=t/2;	
			else t=3*t+1;
		}
	if(j>max) max=j;
	if(x>y) cout<<"Case "<<cs<<": A = "<<x<<", limit = "<<y<<", number of terms = 1"<<endl;
	else cout<<"Case "<<cs<<": A = "<<x<<", limit = "<<y<<", number of terms = "<<max<<endl;
	}
	return 0;
}