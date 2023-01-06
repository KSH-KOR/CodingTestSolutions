#include <string>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        if (s.length() == 1) {
            return num;
        }
        int sum = 0;
        for (char c : s) {
            sum += ((int)c - 48);
        }
        return addDigits(sum);
    }
};