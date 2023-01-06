class Solution {
public:
    bool isPerfectSquare(int num) {
        long t = 1;
        while (true) {
            if (t * t < num) {
                t++;
                continue;
            }
            else if (t * t == num) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};