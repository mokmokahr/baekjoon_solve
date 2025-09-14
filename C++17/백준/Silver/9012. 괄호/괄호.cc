/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;
    

    for (int i = 0; i < N; i++) {
        queue <int> q;
        int isNo = 0;
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == '(') {
                q.push(1);
            }
            else if (s[j] == ')') {
                if (q.empty()) {
                    isNo = 1;
                    cout << "NO\n";
                    break;
                }
                else {
                    q.pop();
                }
            }
        }
        if (q.empty() && isNo == 0){ 
            cout << "YES\n";
        }else if(isNo == 0){
            cout<<"NO\n";
        }
        
    }
}