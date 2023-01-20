#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        for (string op : operations) {
            if (op == "+") {
                int last = vec.back(); vec.pop_back();
                int sec = vec.back(); vec.pop_back();
                vec.push_back(sec);
                vec.push_back(last);
                vec.push_back(sec + last);
            }
            else if (op == "D") {
                vec.push_back(vec.back() * 2);
            }
            else if (op == "C") {
                vec.pop_back();
            }
            else {
                vec.push_back(stoi(op));
            }
        }
        int answer = 0;
        for (int v : vec) answer += v;
        return answer;
    }
};