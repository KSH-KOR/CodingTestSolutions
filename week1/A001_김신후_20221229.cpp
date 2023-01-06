#include <limits>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0, gIndex = 0, sIndex = 0, greedFactor = 0;
        const int gSize = g.size(), sSize = s.size();
        while (gIndex < gSize && sIndex < sSize) {
            greedFactor = g[gIndex];
            while (sIndex < sSize && s[sIndex] < greedFactor) sIndex++;
            if (sIndex >= sSize) break;
            count++;
            sIndex++; gIndex++;
        }
        return count;
    }
};