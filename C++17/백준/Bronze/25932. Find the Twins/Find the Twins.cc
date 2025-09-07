#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i = 0; i<N; i++){
        bool players[2] = {false,false};
        for(int j = 0; j<10; j++){
            int num;
            cin>>num;
            cout<<num<<" ";
            if(num == 18){
                players[0] = true;
            }else if(num == 17){
                players[1] = true;
            }
        }
        cout<<"\n";
        if(players[0] && players[1]){
            cout<<"both";
        }else if(players[0]){
            cout<<"mack";
        }else if(players[1]){
            cout<<"zack";
        }else{
            cout<<"none";
        }
        cout<<"\n\n";
    }
}