#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> days = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    int totalDays = 0;
    for (int i = 1; i < a; i++) {
        if (i <= 7) {
            totalDays += i % 2 == 0 ? (i == 2 ? 29 : 30) : 31;
        }
        else {
            totalDays += i % 2 == 0 ? 31 : 30;
        }
    }
    totalDays += b;
    return days[totalDays % 7 - 1 != -1 ? totalDays % 7 - 1 : 6];
}