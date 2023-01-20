#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    auto str_a = to_string(a);
    auto str_b = to_string(b);

    return str_a + str_b > str_b + str_a;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), cmp);
    int sum = 0;
    for (int n : numbers) {
        answer += to_string(n);
        sum += n;
    }
    if (sum == 0) return "0";
    return answer;
}