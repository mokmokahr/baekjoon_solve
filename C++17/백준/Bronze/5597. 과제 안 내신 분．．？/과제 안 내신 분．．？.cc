#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(30);
    for(int i = 0; i<28; i++){
        int a;
        cin>>a;
        v[a-1] = 1;
    }
    for(int i = 0; i<30; i++){
        if(v[i] == 0){
            cout<<i+1<<"\n";
        }
    }
}