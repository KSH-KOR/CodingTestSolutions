#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> answer;
        bool found;
        for (auto x : nums) {
            found = false;
            for (auto it = answer.begin(); it < answer.end(); it++) {
                if (*it == x) {
                    answer.erase(it);
                    found = true;
                    break;
                }
            }
            if (!found) answer.push_back(x);
        }
        return answer[0];
    }
};

int main() {
    vector<int> v = { 2, 2, 1 };
    cout << Solution().singleNumber(v);
}