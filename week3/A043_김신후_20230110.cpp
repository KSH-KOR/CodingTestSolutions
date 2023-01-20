#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];
        string answer = strs[0];
        string temp;
        int i;
        for (string s : strs) {
            i = 0;
            temp = "";
            for (char a : answer) {
                if (a == s[i]) {
                    temp += a;
                }
                else {
                    answer = temp;
                    break;
                }
                i++;
            }
        }
        return answer;
    }
};