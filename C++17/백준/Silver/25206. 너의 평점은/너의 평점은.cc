#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_map <string,double>scoreMap = {
        {"A+",4.5},
        {"A0",4.0},
        {"B+",3.5},
        {"B0",3.0},
        {"C+",2.5},
        {"C0",2.0},
        {"D+",1.5},
        {"D0",1.0},
        {"F",0.0},
    };
    string s,score;
    double n,sumScore = 0,sumNum = 0;
    
    for(int i = 0; i<20; i++){
        cin>>s;
        
        
        cin>>n;
        cin>>score;
        if(score != "P"){
            sumNum += n;
            sumScore += scoreMap[score]*n;
        }
    }
    cout<<sumScore/sumNum;
}