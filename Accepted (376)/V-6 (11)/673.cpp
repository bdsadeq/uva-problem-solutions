//Parentheses Balance (#673)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	stack<char> st;
	char in[200],dm[5];
	long c,cas,len,i,ans,sz;

	scanf("%ld",&cas);gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(in);
		len=strlen(in);


		sz=st.size();
		for(i=0;i<sz;i++) st.pop();

		ans=1;
		for(i=0;i<len;i++)
		{
			if(in[i]=='(' || in[i]=='[') st.push(in[i]);
			else
			{
				if(in[i]==')' && st.size()==0)
				{
					ans=0;
					break;
				}
				else if(in[i]==']' && st.size()==0)
				{
					ans=0;
					break;
				}
				else if(in[i]==')' && st.top()!='(')
				{
					ans=0;
					break;
				}
				else if(in[i]==']' && st.top()!='[')
				{
					ans=0;
					break;
				}

				else if(in[i]==')' && st.top()=='(') st.pop();
				else if(in[i]==']' && st.top()=='[') st.pop();
			}
		}
		if(st.size()!=0) ans=0;
		if(len==0) ans=1;

		//output
		if(ans==1) printf("Yes\n");
		else if(ans==0) printf("No\n");
	}

	return 0;
}
