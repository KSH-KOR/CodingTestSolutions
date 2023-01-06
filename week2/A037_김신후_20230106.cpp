#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    bool check(int n) {

        string s = to_string(n);
        for (char c : s) {
            if (((int)c - 48) == 0) return false;
            if (n % ((int)c - 48) != 0) return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for (int i = left; i <= right; i++) {
            if (check(i)) answer.push_back(i);
        }
        return answer;
    }
};