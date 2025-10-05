#include <iostream>
using namespace std;


int main()
{
    int arr[4];
    int e,f,g;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>e>>f>>g;
    for(int i = 0; i<4; i++){
        if(arr[i] == e){
            cout<<i+1;
            return 0;
        }
    }
    cout<<0;
    
}