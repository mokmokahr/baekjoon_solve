#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int N;
    string s;
    long long res = 0;
    cin>>s>>N;
    for(int i = 0; i<s.length(); i++){
        int curr,sqare = 1;
        if(isdigit(s[i]) == 0){
            curr = s[i]-'A'+10;
        }else{
            curr = s[i]-'0';
        }
        for(int j = 0; j<s.length()-i-1; j++){
            sqare *= N;
        }
        res+=curr*sqare;
    }
    cout<<res;
    
}