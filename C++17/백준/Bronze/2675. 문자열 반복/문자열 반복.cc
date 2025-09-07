#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>n>>s;
        for(int i = 0; i<s.length(); i++){
            for(int j = 0; j<n; j++){
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
}