#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool shouldChangeToLowerCase = false;
    for (char c : s) {
        if (c == ' ') {
            shouldChangeToLowerCase = false;
            answer += c;
            continue;
        }
        try {
            if (shouldChangeToLowerCase) {
                answer += tolower(c);
            }
            else {
                answer += toupper(c);
                shouldChangeToLowerCase = true;
            }
        }
        catch (int e) {
            continue;
        }

    }
    return answer;
}