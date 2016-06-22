//Pseudo-Random Numbers (#350)
//Sadeq

#include<iostream.h>

int main()
{
	long l,z,i,m,j=0,count,arr[10000];
	long x;
	while(cin>>z>>i>>m>>l)
	{
		if(((z==0) && (i==0)) && ((m==0) && (l==0))) break;
		for(x=0;x<10000;x++) arr[x]=0;
		j++;
		count=-1;
		while(1)
		{
			count++;
			l=(((z%m)*(l%m))%m+i)%m;
			if(arr[l]==1) break;
			else arr[l]=1;
		}
		cout<<"Case "<<j<<": "<<count<<endl;
	}
	return 0;
}