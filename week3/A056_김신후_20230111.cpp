#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int foundNum;
        bool found;
        bool foundGreater;
        vector<int> answer;
        for (int i = 0; i < nums1.size(); i++) {
            found = false;
            foundGreater = false;
            for (int target : nums2) {
                if (found) {
                    if (foundNum < target) {
                        foundGreater = true;
                        answer.push_back(target);
                        break;
                    }
                }
                if (nums1[i] == target) {
                    found = true;
                    foundNum = target;
                }
            }
            if (!foundGreater) answer.push_back(-1);
        }
        return answer;
    }
};