#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int i = 0;
    for(;i<n;i++){
        cout<<s[i];
        if((i+1)%10 == 0) cout<<"\n";
    }
}