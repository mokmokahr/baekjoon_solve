/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int cnt = 0;
    cin>>N;
    for(int i = 0; i<N; i++){
        string s;
        cin>>s;
        cnt +=s.length();
    }
    cout<<cnt;

    return 0;
}