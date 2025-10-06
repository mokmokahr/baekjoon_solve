#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{
    cin.tie(0);
	ios::sync_with_stdio(0);
    int m,n;
    vector<string> v(100001);
    cin>>m>>n;
    unordered_map<string, int> m2;
    for(int i = 0; i<m; i++){
        cin>>v[i+1];
        m2[v[i+1]] = i+1;
    }
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        if(isdigit(s[0]) != 0){
            cout<<v[stoi(s)]<<"\n";
        }else{
            cout<<m2[s]<<"\n";
        }
    }
    
}