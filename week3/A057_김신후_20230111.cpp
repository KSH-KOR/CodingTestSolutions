#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> cookie) {
    int answer = -1;
    int left, right;
    vector<int>::iterator move;
    for (auto it = cookie.begin(); it < cookie.end(); it++) {
        left = 0; right = *it;
        move = it;
        while (true) {
            if (left < right) {
                if (move == cookie.begin()) break;
                move--;
                left += *move;
            }
            else if (right > left) {
                if (move == cookie.end() - 1) break;
                move++;
                right += *move;
            }
            else {
                if (answer < left) answer = left;
                if (move != cookie.begin()) {
                    move--;
                }
                else if(move != cookie.end()-1) {
                    move++;
                }
                else {
                    break;
                }
            }
        }
    }
    return answer;
}

int main() {
    vector<int> cookie = { 1,1,2,3 };
    cout << solution(cookie);
}