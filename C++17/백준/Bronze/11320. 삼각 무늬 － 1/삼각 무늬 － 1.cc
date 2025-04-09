#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        a *=a;
        b *=b;
        (a%b == 0)?cout<<a/b:cout<<a/b+1;
        cout<<'\n';
    }
}