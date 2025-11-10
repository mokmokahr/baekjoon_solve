#include <iostream>
using namespace std;

int main()
{
    int n,k;
    int res=0;
    cin>>n>>k;
    for(int i = 1;i<=n;i++){
        if(k==0){
            cout<<res;
            return 0;
        }
        if(n%i==0){
            res=i;
            k--;
        }
    }
    if(k>0){
        cout<<0;
    }else{
        cout<<res;
    }
    return 0;
}