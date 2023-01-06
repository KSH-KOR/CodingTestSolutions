#include <string>
#include <iostream>
using namespace std;

int solution(char* s) {
    if ((s[0] != '1') && (s[0] != '8')) return 2;
    bool isAsc = true;
    bool isDes = true;
    char count = '1';
    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] == ' ') continue;
        if (s[i] != count) isAsc = false;
        if (s[i] != '9' - count + 48) isDes = false;
        if (!(isAsc + isDes)) return 2;
        count++;
    }
    if (isAsc) return 0;
    if (isDes) return 1;
}

int main() {
    char s[16];
    cin.getline(s, 16);
    switch (solution(s)) {
    case 0:
        cout << "ascending";
        break;
    case 1:
        cout << "descending";
        break;
    default:
        cout << "mixed";
        break;
    }
}