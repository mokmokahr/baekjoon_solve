#include <iostream>
using namespace std;

int main(){
    int total;
    cin>>total;
    for(int i = 0; i<9; i++){
        int t;
        cin>>t;
        total -=t;
    }
    cout<<total;
}