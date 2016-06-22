//Tarot scores (#11225)
//Sadeq
//string simulation

#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

void init();

map<string, double> m;

int main()
{
	//freopen("in.txt","r",stdin);

	init();

	long cas,c;
	long n,i,oud;
	double point,win;
	char in[50],dm[5];

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&n);gets(dm);

		win=0.0;
		point=0.0;
		oud=0;
		for(i=0;i<n;i++)
		{
			gets(in);

			if(strcmp(in,"one of trumps")==0) oud++;
			else if(strcmp(in,"twenty-one of trumps")==0) oud++;
			else if(strcmp(in,"fool")==0) oud++;

			point=point+m[in];
		}

		if(oud==0) win=56.0;
		else if(oud==1) win=51.0;
		else if(oud==2) win=41.0;
		else if(oud==3) win=36.0;

		if(c>1) printf("\n");
		printf("Hand #%ld\n",c);

		if(point<win) printf("Game lost by %.0lf point(s).\n",win-point);
		else printf("Game won by %.lf point(s).\n",point-win);
	}

	return 0;
}

void init()
{
	//special card trump
	m["one of trumps"]=4.5;
	m["two of trumps"]=0.5;
	m["three of trumps"]=0.5;
	m["four of trumps"]=0.5;
	m["five of trumps"]=0.5;
	m["six of trumps"]=0.5;
	m["seven of trumps"]=0.5;

	m["eight of trumps"]=0.5;
	m["nine of trumps"]=0.5;
	m["ten of trumps"]=0.5;
	m["eleven of trumps"]=0.5;
	m["twelve of trumps"]=0.5;
	m["thirteen of trumps"]=0.5;
	m["fourteen of trumps"]=0.5;

	m["fifteen of trumps"]=0.5;
	m["sixteen of trumps"]=0.5;
	m["seventeen of trumps"]=0.5;
	m["eighteen of trumps"]=0.5;
	m["nineteen of trumps"]=0.5;
	m["twenty of trumps"]=0.5;
	m["twenty-one of trumps"]=4.5;

	//fool card
	m["fool"]=4.5;

	//spades
	m["ace of spades"]=0.5;
	m["two of spades"]=0.5;
	m["three of spades"]=0.5;
	m["four of spades"]=0.5;
	m["five of spades"]=0.5;
	m["six of spades"]=0.5;
	m["seven of spades"]=0.5;
	m["eight of spades"]=0.5;
	m["nine of spades"]=0.5;
	m["ten of spades"]=0.5;
	m["jack of spades"]=1.5;
	m["knight of spades"]=2.5;
	m["queen of spades"]=3.5;
	m["king of spades"]=4.5;
	
	//hearts
	m["ace of hearts"]=0.5;
	m["two of hearts"]=0.5;
	m["three of hearts"]=0.5;
	m["four of hearts"]=0.5;
	m["five of hearts"]=0.5;
	m["six of hearts"]=0.5;
	m["seven of hearts"]=0.5;
	m["eight of hearts"]=0.5;
	m["nine of hearts"]=0.5;
	m["ten of hearts"]=0.5;
	m["jack of hearts"]=1.5;
	m["knight of hearts"]=2.5;
	m["queen of hearts"]=3.5;
	m["king of hearts"]=4.5;

	//diamonds
	m["ace of diamonds"]=0.5;
	m["two of diamonds"]=0.5;
	m["three of diamonds"]=0.5;
	m["four of diamonds"]=0.5;
	m["five of diamonds"]=0.5;
	m["six of diamonds"]=0.5;
	m["seven of diamonds"]=0.5;
	m["eight of diamonds"]=0.5;
	m["nine of diamonds"]=0.5;
	m["ten of diamonds"]=0.5;
	m["jack of diamonds"]=1.5;
	m["knight of diamonds"]=2.5;
	m["queen of diamonds"]=3.5;
	m["king of diamonds"]=4.5;

	//clubs
	m["ace of clubs"]=0.5;
	m["two of clubs"]=0.5;
	m["three of clubs"]=0.5;
	m["four of clubs"]=0.5;
	m["five of clubs"]=0.5;
	m["six of clubs"]=0.5;
	m["seven of clubs"]=0.5;
	m["eight of clubs"]=0.5;
	m["nine of clubs"]=0.5;
	m["ten of clubs"]=0.5;
	m["jack of clubs"]=1.5;
	m["knight of clubs"]=2.5;
	m["queen of clubs"]=3.5;
	m["king of clubs"]=4.5;
}
