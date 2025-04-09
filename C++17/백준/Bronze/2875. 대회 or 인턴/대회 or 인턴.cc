#include <iostream>
using namespace std;
int main()
{
    int M,N,K;
    cin>>N>>M>>K;
    while(K){
        (N>=M*2)?N--:M--;
        K--;
    }
    while(1){
        if(N>=M*2){
            cout<<M;
            return 0;
        }else{
            M--;
        }
    }
}