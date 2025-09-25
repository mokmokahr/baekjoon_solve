#include <iostream>
#include <string>
using namespace std;

int main(){
    int cnt = 0;
    string s;
    int sum = 0;
    cin>>s;
    while(s.length() > 1){
        sum = 0;
        for(int i = 0; i<s.length(); i++){
            sum += int(s[i]-'0');
        }
        s = to_string(sum);
        cnt++;
    }
    cout<<cnt<<"\n";
    if(sum<10) sum = int(s[0]-'0');
    sum%3 == 0 && sum !=0 ?cout<<"YES":cout<<"NO";
}