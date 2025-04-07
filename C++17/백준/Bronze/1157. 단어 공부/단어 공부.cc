#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    char str[1000001];
    int counter[26] = {0};

    cin >> str;

    // 문자열 길이를 한 번만 계산
    int len = strlen(str);

    // 대소문자 변환 및 카운팅
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // 소문자를 대문자로 변환
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            counter[str[i] - 'A']++;  // 대문자 카운트
        }
    }

    // 최대 카운트 값 찾기
    int max = *max_element(counter, counter + 26);

    // 최대값이 여러 번 등장하면 '?' 출력
    int countMax = 0;
    char result = '?';
    for (int i = 0; i < 26; i++) {
        if (counter[i] == max) {
            countMax++;
            result = i + 'A';  // 최대로 나온 알파벳 기록
        }
    }

    if (countMax > 1) {
        cout << '?';
    } else {
        cout << result;
    }

    return 0;
}
