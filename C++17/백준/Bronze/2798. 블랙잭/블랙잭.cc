#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    int card[101];
    cin>>N>>M;
    for(int i = 0; i<N;i++){
        cin>>card[i];
    }
    int max = 0;
    for(int i = N-1;i>=0;i--){
        for(int j= i-1;j>=0; j--){
            if(card[i]+card[j]<M){
                for(int k = j-1;k>=0;k--){
                    int sum = card[i]+card[j]+card[k];
                    if(sum<=M && max<sum){
                        max = sum;
                    }
                }
            }
        }
    }
    cout<<max;
}