//Immediate Decodability #644
//Sadeq

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	vector<string> V;
	string temp;
	int cas=1;
	int i,j;
	int prefix=0;
	int len;

	while(cin>>temp)
	{
		//first clean the vector
		V.push_back(temp);
		if(temp=="9")
		{
			prefix=0;
			for(i=0;i<V.size()-1;i++)
			{
				for(j=0;j<V.size()-1;j++)
				{
					if(i!=j)
					{
						//check has prefix ?
						len=V[i].length();
						temp=V[j].substr(0,len);

						if(temp==V[i])
						{
							prefix=1;
						}
					}

				}
			}

			if(prefix==0)
			{
				cout<<"Set "<<cas<<" is immediately decodable"<<endl;
			}else
			{
				cout<<"Set "<<cas<<" is not immediately decodable"<<endl;
			}
			V.clear();
			cas++;
		}
	}



	return 0;
}
