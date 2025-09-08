#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> v(N);
    vector<int> jud(M);
    for(int i = 0; i<N; i++){
        cin>>v[i];
    }
    for(int i = 0; i<M; i++){
        int a;
        cin>>a;
        for(int j = 0;j<N; j++){
            if(v[j]<=a){
                jud[j]++;
                break;
            }
        }
    }
    int max = 0,maxIdx = 0;
    
    for(int i = 0; i<M; i++){
        if(jud[i]>max){
            max = jud[i];
            maxIdx = i+1;
        }
    }
    cout<<maxIdx;
}