#include <string>
#include <vector>
#include <iostream>

using namespace std; 
class Solution {
public:
    bool checkRecord(string s) {
        int lcount = 0, acount = 0;
        bool lateDayBefore = false;
        for (char c : s) {
            switch (c) {
            case 'P':
                lateDayBefore = false;
                break;
            case 'A':
                acount++;
                lateDayBefore = false;
                break;
            case 'L':
                if (lateDayBefore) {
                    lcount++;
                }
                else {
                    lcount = 1;
                    lateDayBefore = true;
                }
                break;
            }
            if (lcount >= 3 || acount >= 2) return false;
        }
        return true;
    }
};