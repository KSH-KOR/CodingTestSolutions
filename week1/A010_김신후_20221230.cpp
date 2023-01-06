#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    if (s.empty()) return 0;
    int len = s.length();
    string temp;
    string curr;
    string prev;
    int minLen = len;
    int tempLen;
    bool flag = false;
    int count=1;
    for (int i = 1; i <= len / 2; i++) {
        tempLen = len;
        prev = s.substr(0, i);
        for (int j = i; j < len; j += i) {
            curr = s.substr(j, i);
            if (prev.compare(curr) == 0) {
                count++;
                tempLen -= i;
            }
            else {
                if (count > 1) tempLen += to_string(count).length();
                count = 1;
            }
            prev = curr;
        }
        if (count > 1) tempLen += to_string(count).length();
        if (tempLen < minLen) minLen = tempLen;
        count = 1;
    }
    return minLen;
}