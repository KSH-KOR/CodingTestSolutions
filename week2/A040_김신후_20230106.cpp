#include <string>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "aeiouAEIOU";
        int n = s.length();
        int countl = 0, countr = 0;
        for (int i = 0, j = n / 2; i < n / 2 && j < n; i++, j++) {
            if (a.find(s[i]) != string::npos) countl++;
            if (a.find(s[j]) != string::npos) countr++;
        }
        return countl == countr;
    }
};