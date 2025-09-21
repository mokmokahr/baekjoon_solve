#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int fibo[41];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 41; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num >1) {
            printf("%d %d\n", fibo[num-1], fibo[num]);
        }
        else if (num == 1) {
            printf("0 1\n");
        }
        else {
            printf("1 0\n");
        }

        
    }

}