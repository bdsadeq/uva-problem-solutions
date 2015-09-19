//Automatic Editing #10115
//Sadeq

#include<iostream>
#include<string>
#include<vector>
#include<istream>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	long num,i;
	size_t found;

	vector<string> find;
	vector<string> replace;

	string mainString,finalString;
	string temp;


	while(cin>>num)
	{
		getline(cin,temp);

		if(num==0)
		{
			break;
		}

		find.clear();
		replace.clear();

		for(i=0;i<num;i++)
		{
			getline(cin,temp);
			find.push_back(temp);

			getline(cin,temp);
			replace.push_back(temp);
		}

		getline(cin,mainString);
		finalString=mainString;

		//cout<<finalString;


		for(i=0;i<num;i++)
		{
			found = finalString.find(find[i]);

			//cout<<find[i]<<endl;

			while (found!=string::npos){

				//	//cout<<found;
				finalString.replace(found, find[i].size(), replace[i]);
				found = finalString.find( find[i] );
			};
		}

		cout<<finalString<<endl;


	}



	return 0;
}
