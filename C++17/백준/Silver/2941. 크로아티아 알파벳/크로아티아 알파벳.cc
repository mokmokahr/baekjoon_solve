#include <iostream>
using namespace std;

int main(){
    string s;
    int idx = 0,cnt = 0;
    cin>>s;
    while(idx<s.length()){
        switch(s[idx]){
            case 'c':
                if(++idx != s.length()){
                    switch(s[idx]){
                        case '=':
                        case '-':
                            cnt++;
                            break;
                        default:
                            cnt++;
                            idx--;
                    }
                }else{
                    cnt++;
                }
                break;
            case 'd':
                if(++idx != s.length()){
                    if(s[idx] == '-'){
                        cnt++;
                    }else if(s[idx] == 'z'){
                        if(++idx != s.length()){
                            if(s[idx] == '='){
                                cnt++;
                            }else{
                                idx-=2;
                                cnt++;
                            }
                        }else{
                            cnt++;
                            idx-=2;
                        }
                    }
                    else{
                        cnt++;
                        idx--;
                    }
                }else{
                    cnt++;
                }
                break;
            case 'l':
                if(++idx != s.length()){
                    if(s[idx] != 'j'){
                        idx--;
                    }
                }
                cnt++;
                break;
            case 'n':
                if(++idx != s.length()){
                    if(s[idx] != 'j'){
                        idx--;
                    }
                }
                cnt++;
                break;
            case 's':
                if(++idx != s.length()){
                    if(s[idx] != '='){
                        idx--;
                    }
                }
                cnt++;
                break;
            case 'z':
                if(++idx != s.length()){
                    if(s[idx] != '='){
                        idx--;
                    }
                }
                cnt++;
                break;
            default:
                cnt++;
        }
        idx++;
    }
    cout<<cnt;
}