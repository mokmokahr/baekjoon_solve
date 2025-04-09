#include <iostream>
using namespace std;
int main()
{
    int x,N;
    cin>>x>>N;
    while(N){
        (x%2==0)?x = (x/2)^6:x = (x*2)^6;
        N--;
    }
    cout<<x;
}