#include <iostream>
using namespace std;

int main(){
    int N,D = 0,P = 0;
    cin>>N;
    for(int i = 0; i<N; i++){
        char c;
        cin>>c;
        if(D-P >=2 || P-D >=2){
            cout<<D<<":"<<P;
            return 0;
        }
        if(c == 'D'){
            D++;
        }else{
            P++;
        }
    }
    cout<<D<<":"<<P;
}