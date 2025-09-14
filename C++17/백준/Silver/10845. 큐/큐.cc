/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;
    int N;
    cin>>N;
    for(int i = 0; i<N; i++){
        string s;
        cin>>s;
        if(s == "push"){
            int n;
            cin>>n;
            q.push(n);
        }else if(s == "pop"){
            if(q.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }else if(s == "size"){
            cout<<q.size()<<"\n";
        }else if(s == "empty"){
            cout<<q.empty()<<"\n";
        }else if(s == "front"){
            if(q.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<q.front()<<"\n";
            }
        }else if(s == "back"){
            if(q.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<q.back()<<"\n";
            }
            
        }
    }
}