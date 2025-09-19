#include <iostream>
using namespace std;


int main()
{
    int max = 0,x =0,y=0;
    int arr[9][9];
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            cin>>arr[i][j];
            if(max<arr[i][j]){
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout<<max<<"\n"<<x+1<<" "<<y+1;
    
    return 0;
}