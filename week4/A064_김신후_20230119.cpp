#include<string>
#include<vector>
#include<algorithm>
using namespace std; 
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> t = heights;
        sort(heights.begin(), heights.end());
        int count = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != heights[i]) count++;
        }
        return count;
    }
};