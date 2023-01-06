class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        int cnt = 0;
        vector<bool> nums(n, true);
        nums[0] = nums[1] = false;
        for (int i = 2; i < n; ++i)
            if (nums[i]) {
                ++cnt;
                for (int j = 2; i * j < n; ++j)
                    nums[i * j] = false;
            }
        return cnt;
    }
};