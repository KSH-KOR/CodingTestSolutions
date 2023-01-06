#include <string>
#include <vector>
#include <algorithm> 


using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto x : arr) {
        if (x % divisor != 0) continue;
        answer.push_back(x);
    }
    if (answer.empty()) return { -1 };
    sort(answer.begin(), answer.end());
    return answer;
}