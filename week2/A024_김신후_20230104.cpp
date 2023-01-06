#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5 = 0;
        map<string, int> changes = { {"5", 0}, {"10", 0}, {"20", 0} };
        for (auto b : bills) {
            changes[to_string(b)]++;
            b -= 5;
            while (b > 0) {
                if (b >= 20 && changes["20"] != 0) {
                    b -= 20;
                    changes["20"]--;
                }
                else if (b >= 10 && changes["10"] != 0) {
                    b -= 10;
                    changes["10"]--;
                }
                else if (b >= 5 && changes["5"] != 0) {
                    b -= 5;
                    changes["5"]--;
                }
                else {
                    return false;
                }
            }

        }
        return true;
    }
};