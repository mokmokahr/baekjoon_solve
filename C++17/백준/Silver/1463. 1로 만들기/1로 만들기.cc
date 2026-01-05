#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N+1] = {0};
    int num = 2;
    while(num <= N){
        arr[num] = arr[num-1]+1;
        if(num%3 == 0){
            if((arr[num/3]+1)<arr[num]){
                arr[num] = arr[num/3]+1;
            }
        }
        if(num%2 == 0){
            if((arr[num/2]+1)<arr[num]){
                arr[num] = arr[num/2]+1;
            }
        }
        num++;
    }
    cout<<arr[N];
    return 0;
}