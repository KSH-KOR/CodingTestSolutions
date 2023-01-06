#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.empty()) {
            digits.push_back(1);
            return digits;
        }
        if (digits.back() != 9) {
            digits.back()++;
        }
        else {
            int popCount = 0;
            while (digits.back() == 9) {
                digits.pop_back();
                popCount++;
                if (digits.empty()) break;
            }
            if (digits.empty()) digits.push_back(1);
            else digits.back()++;
            for (int i = 0; i < popCount; i++) {
                digits.push_back(0);
            }
        }
        return digits;

    }
};