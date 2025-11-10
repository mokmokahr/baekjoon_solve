#include <iostream>
using namespace std;

int main()
{
    int n,m,min =-1;
    long long sum = 0;
    cin>>n>>m;
    for(int i = n; i<=m; i++){
        if(i==2){
            min = i;
            sum+=i;
        }
        for(int j = 2;j<i; j++){
            if(i%j==0) break;
            if(j==i-1){
                if(min == -1) min = i;
                sum+=i;
            }
        }
    }
    if(min !=-1)
        cout<<sum<<"\n"<<min;
    else
        cout<<-1;
}