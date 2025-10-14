#include <iostream>
using namespace std;

int main()
{
    int N,cnt = 0;
    int visited[100][100] = {0};
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        for(int i =b-1; i<b-1+10; i++){
            for(int j = a-1; j<a-1+10; j++){
                if(visited[i][j] != 1){
                    cnt++;
                    visited[i][j] = 1;
                }
                
            }
        }
    }
    cout<<cnt;
    
}