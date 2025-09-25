#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int canSleep = 0;
    int tileCnt = 0;
    int sleepSpaceW = 0,sleepSpaceH = 0;
    vector<vector<char>> v(n,vector<char>(n));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>v[i][j];
            if(v[i][j] == '.'){
                tileCnt++;
            }else{
                if(tileCnt >= 2){
                    canSleep++;
                    tileCnt = 0;
                }else{
                    tileCnt = 0;
                }
            }
        }
        if(tileCnt >= 2){
            canSleep++;
        }
        if(canSleep){
            sleepSpaceW+=canSleep;
        }
        canSleep = 0;
        tileCnt = 0;
    }
    tileCnt = 0;
    canSleep = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(v[j][i] == '.'){
                tileCnt++;
            }else{
                if(tileCnt >= 2){
                    canSleep++;
                    tileCnt = 0;
                }else{
                    tileCnt = 0;
                }
            }
        }
        if(tileCnt >= 2){
            canSleep++;
        }
        if(canSleep){
            sleepSpaceH+=canSleep;
        }
        canSleep = 0;
        tileCnt = 0;
    }
    cout<<sleepSpaceW<<" "<<sleepSpaceH;

}