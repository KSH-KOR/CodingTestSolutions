#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int slen = s.length();
        int tlen = t.length();
        bool stag = 1, ttag = 1;
        for (int i = 0; i < slen; i++) {
            if (s[i] == '#') {
                if (i == 0) {
                    s.erase(i, 1);
                    slen--;
                    i--;
                    continue;
                }
                s.erase(i - 1, 2);
                slen -= 2;
                i-=2;
            }
        }
        for (int i = 0; i < tlen; i++) {
            if (t[i] == '#') {
                if (i == 0) {
                    t.erase(i, 1);
                    tlen--;
                    i--;
                    continue;
                }
                t.erase(i - 1, 2);
                tlen -= 2;
                i-=2;
            }
        }
        return s == t;
    }
};

int main() {
    cout << Solution().backspaceCompare("j###xfix", "j###xfix") << endl;
}