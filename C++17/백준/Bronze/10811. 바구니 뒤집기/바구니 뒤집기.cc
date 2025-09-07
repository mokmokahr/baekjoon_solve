#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> v(N);
    for(int i = 0; i<N; i++){
        v[i] = i+1;
    }
    for(int i = 0; i<M; i++){
        int a,b;
        cin>>a>>b;
        for(int j = 0; j<(b-a+1)/2; j++){
            int tmp = v[a-1+j];
            v[a-1+j] = v[b-1-j];
            v[b-1-j] = tmp;
        }
    }
    for(int i = 0; i<N; i++){
        cout<<v[i]<<" ";
    }
}