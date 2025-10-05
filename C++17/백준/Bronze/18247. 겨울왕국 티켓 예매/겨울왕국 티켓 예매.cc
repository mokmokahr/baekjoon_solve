#include <iostream>
using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        if(a<12 || b<4){
            cout<<-1<<"\n";
        }else{
            cout<<b*11+4<<"\n";
        }
    }
    
}