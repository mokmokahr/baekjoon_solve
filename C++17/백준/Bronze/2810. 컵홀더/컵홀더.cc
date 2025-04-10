#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N,cnt = 0,Lcnt = 1;
    string s;
    cin>>N>>s;
    for(int i = 0; i<N; i++){
        if(i == 0){
            cnt++;
        }
        switch(s[i]){
            case 'S':
            cnt++;
            break;
            case 'L':
            if(Lcnt % 2 == 0) cnt++;
            Lcnt++;
        }
    }
    if(cnt>=N){
        cout<<N;
    }else{
        cout<<cnt;
    }
}