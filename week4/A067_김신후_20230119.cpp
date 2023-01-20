#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        if (s.empty()) return "";
        char prev = '0';
        int sl = s.length();
        for (int i = 0; i < sl; i++) {
            if (prev == s[i]) {
                s.erase(i - 1, 2);
                i -= 2;
                if (i < 0) i = 0;
                sl -= 2;
            }
            prev = s[i];
        }
        return s;
    }
};

int main() {
    string a = "abbaca";
   cout << Solution().removeDuplicates(a);
}