#include <iostream>
using namespace std;
/*
    구호 SONGDO에 대해 HIGHSCHOOL로 응원.
구호 CODE에 대해 MASTER로 응원.
구호 2023에 대해 0611로 응원.
구호 ALGORITHM에 대해 CONTEST로 응원.
*/
int main(){
    string s;
    cin>>s;
    if(s == "SONGDO"){
        cout<<"HIGHSCHOOL";
    }else if(s == "CODE"){
        cout<<"MASTER";
    }else if(s == "2023"){
        cout<<"0611";
    }else{
        cout<<"CONTEST";
    }
}