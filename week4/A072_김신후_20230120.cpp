class Solution {
    bool isLeapYear(int year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    return true;
                }
                else {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int mo = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int days = 0;
        for (int m = 1; m < mo; m++) {
            if (m <= 7) {
                if (m % 2 == 0) {
                    if (m != 2) {
                        days += 30;
                    }
                    else {
                        days += isLeapYear(year) ? 29 : 28;
                    }
                }
                else {
                    days += 31;
                }
            }
            else {
                if (m % 2 == 0) {
                    days += 31;
                }
                else {
                    days += 30;
                }
            }
        }
        days += day;
        return days;
    }
};