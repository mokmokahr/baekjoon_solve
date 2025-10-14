#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        n/25 == 0?cout<<0:cout<<n/25;
        cout<<" ";
        n %= 25;
        n/10 == 0?cout<<0:cout<<n/10;
        cout<<" ";
        n %= 10;
        n/5 == 0?cout<<0:cout<<n/5;
        cout<<" ";
        n %= 5;
        n/0.01 == 0?cout<<0:cout<<n/1;
        n %= 1;
        cout<<"\n";
    }
    
}