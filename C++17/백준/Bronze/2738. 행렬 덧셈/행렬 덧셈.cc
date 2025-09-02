#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n, vector<int>(m));
	for(int i = 0; i<n; i++){
	    for(int j = 0; j<m; j++){
	        cin>>v[i][j];
	    }
	}
	for(int i = 0; i<n; i++){
	    for(int j = 0; j<m; j++){
	        int p;
	        cin>>p;
	        cout<<v[i][j]+p<<" ";
	    }
	    cout<<"\n";
	}
}