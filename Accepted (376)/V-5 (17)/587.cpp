//There's Treasure Everywhere! (#587)
//Sadeq

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int count=1;
    char order;
    string dir;
    double x,y;
    int step;
    double dis;
    const double gh2=pow(2,0.5);
    while(true){
                scanf("%c",&order);
                if(order=='E') break;
                x=10e-10; y=10e-10;
                step=0;
                while(1){
                      if(order>='0'&&order<='9'){
                           step*=10; step+=order-'0';
                      }
                      else if(order=='N'||order=='S'||order=='W'||order=='E'){
                           dir+=order;
                      }
                      else if(order==','||order=='.'){
                           if(dir=="N") y+=step;
                           else if(dir=="S") y-=step;
                           else if(dir=="W") x-=step;
                           else if(dir=="E") x+=step;
                           else if(dir=="NE") {dis=step/gh2; x+=dis; y+=dis;}
                           else if(dir=="SE") {dis=step/gh2; x+=dis; y-=dis;}
                           else if(dir=="NW") {dis=step/gh2; x-=dis; y+=dis;}
                           else if(dir=="SW") {dis=step/gh2; x-=dis; y-=dis;}
                           step=0;
                           dir="";
                      }
                      if(order==10) break;
                      scanf("%c",&order);
                }
                printf("Map #%d\n",count++);
                printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
                printf("The distance to the treasure is %.3lf.\n\n",sqrt(x*x+y*y));
    }
	return 0;
}
