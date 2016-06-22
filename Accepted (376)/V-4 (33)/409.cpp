//Excuses, Excuses! #409
//Sadeq

#include<stdio.h>
#include<iostream>
#include<string>
#include <cctype> // for toupper()
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	string keyword[100],excuse[100],tempString;
	long counter[100];
	long max;
	long K,E;
	long i,j;
	long cas=0;

	size_t found;

	while(cin>>K>>E)
	{
		cas++;
		//cout<<K<<E<<endl;

		getline (cin, keyword[0]);//dummy input

		for(i=0;i<K;i++)
		{
			getline (cin, keyword[i]);

			//cout<<keyword[i]<<endl;
		}

		max=0;
		for(i=0;i<E;i++)
		{
			counter[i]=0;
			getline (cin, excuse[i]);

			tempString=excuse[i];
			transform(tempString.begin(), tempString.end(), tempString.begin(), ::tolower);

			for(j=0;j<tempString.length();j++)
			{
				if(tempString[j]<'a' || tempString[j]>'z')
				{
					tempString[j]=' ';
				}
			}

			//cout<<tempString<<" ";

			//counting occurence
			for(j=0;j<K;j++)
			{
				istringstream iss(tempString);

				do
				{
					string sub;
					iss >> sub;
					if(sub==keyword[j])
					{
						counter[i]++;
					}
				} while (iss);


				//found=tempString.find(keyword[j]);
				//while ((found = tempString.find(keyword[j], found)) != string::npos) {
				//	counter[i]++;
				//	found += keyword[j].length(); // see the note
				//}

			}

			//cout<<tempString<<endl;


			//cout<<counter[i]<<endl;

			if(counter[i]>max)
			{
				max=counter[i];
			}

			//cout<<endl;
		}

		//cout<<max<<endl;

		cout<<"Excuse Set #"<<cas<<endl;
		for(i=0;i<E;i++)
		{
			if(max==counter[i])
			{
				cout<<excuse[i]<<endl;
			}

		}

		cout<<endl;
	}

	return 0;
}