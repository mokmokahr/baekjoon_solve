#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
        case 'a':
        case 'A':
        case 'b':
        case 'D':
        case 'd':
        case 'e':
        case 'g':
        case 'O':
        case 'o':
        case 'P':
        case 'p':
        case 'Q':
        case 'q':
        case 'R':
        case '@':
            sum += 1;
            break;
        case 'B':
            sum += 2;
            break;
        }
    }
    cout << sum;
}