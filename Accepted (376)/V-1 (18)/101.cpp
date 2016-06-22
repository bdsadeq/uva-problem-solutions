//The Blocks Problem #101
//Sadeq
//simulation program, so use net to solve this

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

#define MAXN 30

char str1[50],str2[50];
int blockNumber, A, B;
void moveOnto(int a);
void Set();
void Pile();
void Print();
void Cal();

void initialize();

class sadeq
{
public:
	int stack[MAXN];
	int index;
	int add;
	int pos;
}Block[MAXN];

void initialize()
{
	int i;
	for(i=0;i<blockNumber;i++)
	{
		Block[i].stack[0]=i;
		Block[i].add=i;
		Block[i].pos=0;
		Block[i].index=1;
	}
}

void moveOnto(int a)
{
	int i,j,k;
	int add=Block[a].add;
	int in=Block[add].index;
	int p=Block[a].pos;
	for(i=in-1;i>p;i--)
	{
		j=Block[add].stack[i];
		k=Block[j].index;
		Block[j].add=j;
		Block[j].stack[k++]=j;
		Block[j].pos=k-1;
		Block[j].index++;
		Block[add].index--;
	}

}

void Set() {
	int ada, adb, in;
	ada = Block[A].add;
	adb = Block[B].add;
	in = Block[adb].index;
	Block[ada].index--;
	Block[adb].stack[in++] = A;
	Block[adb].index++;
	Block[A].add = adb;
	Block[A].pos = Block[adb].index-1;
}

void Pile() {
	int posa, ada, adb, inda, indb;
	int i, j;
	ada  =  Block[A].add;
	adb  =  Block[B].add;
	posa =  Block[A].pos;
	inda =  Block[ada].index;
	indb =  Block[adb].index;
	for(i = posa; i<inda; i ++){
		j = Block[ada].stack[i];
		Block[adb].stack[indb++] = j;
		Block[ada].index--;
		Block[j].pos = indb-1;
		Block[j].add = adb;
		Block[adb].index++;
	}
}

void Print() {
	int i, j, index;
	for(i = 0; i<blockNumber; i++) {
		index = Block[i].index;
		printf("%d:",i);
		for(j = 0; j<index; j++)
			printf(" %d",Block[i].stack[j]);
		printf("\n");
	}
}

void Cal() {
	while(1) {
		scanf("%s",str1);
		if(!strcmp(str1,"quit")) break;
		scanf("%d%s%d",&A,str2,&B);
		if(A == B || (Block[A].add == Block[B].add))
			continue;
		if(!strcmp(str2,"onto"))
			moveOnto(B);
		if(!strcmp(str1,"move")){
			moveOnto(A);
			Set();
			continue;
		}
		if(!strcmp(str1,"pile")){ 
			Pile();

		}
	}

}

int main() {
	//freopen("in.txt","r",stdin);

	while(scanf("%d",&blockNumber) == 1) {
		initialize();
		Cal();
		Print();
	}
	return 0;
}
