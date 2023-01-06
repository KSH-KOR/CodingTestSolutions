class Solution {
public:
    int mySqrt(int x) {
        long t = 1;
        while (true) {
            if (t * t < x) {
                t++;
                continue;
            }
            else if (t * t > x) {
                return t - 1;
            }
            else {
                return t;
            }
        }
    }
};