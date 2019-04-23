//13109 Elephants
// seems like sorting algorithm

#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long int CASE, C;
    long long int M,W,i;
    long long int temp,sum,answer;
    vector <long long int> V;


    scanf("%lld", &CASE);
    for(C=1;C<=CASE;C++){
        scanf("%lld %lld", &M, &W);

        V.clear();
        answer=0;
        sum=0;
        for(i=0;i<M;i++){
            scanf("%lld",&temp);

            if(temp<=W){
                V.push_back(temp);
            }
        }

        sort(V.begin(),V.end());

        for(i=0;i<V.size();i++){
            sum=sum+V[i];

            if(sum<=W){
                answer++;
            }
        }

        printf("%lld\n",answer);


    }

    return 0;
}
