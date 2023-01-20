#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string answer = "";
        for (char c : s) {
            if (c == ')') count--;
            if (count != 0) answer += c;
            if (c == '(') count++;
        }
        return answer;
    }
};