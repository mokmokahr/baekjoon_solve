#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int m,n,cnt = 0;
    cin>>m>>n;
    vector<string> v;
    unordered_map<string,int> m1(m);
    
    for(int i = 0; i<m; i++){
        string s;
        cin>>s;
        m1[s] = i;
    }
    
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        if(m1.find(s) != m1.end()){
            cnt++;
            v.push_back(s);
        }
    }
    cout<<cnt<<"\n";
    sort(v.begin(),v.end());
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
}