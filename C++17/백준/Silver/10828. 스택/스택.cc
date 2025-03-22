
#include <iostream>
using namespace std;

int main() {
    int N;
    int stack[10001];
    int idx = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string order;
        cin >> order;
        if (order == "push") {
            int n;
            cin >> n;
            stack[idx] = n;
            idx++;
        }
        else if (order == "pop") {
            int n;
            if (idx > 0) {
                cout << stack[idx-1]<<'\n';
                idx--;
            }
            else cout << -1<<'\n';
        }
        else if (order == "size") {
            cout << idx <<'\n';
        }
        else if (order == "empty") {
            if (idx)cout << 0<<'\n';
            else cout << 1 << '\n';
        }
        else if (order == "top") {
            if (idx > 0)cout << stack[idx-1]<<'\n';
            else cout << -1<<'\n';
        }
    }
}