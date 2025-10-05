#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cout<<n/2+2024<<" "<<(((1+7*n)%12 == 0)?12:(1+7*n)%12);
}