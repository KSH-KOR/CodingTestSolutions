#include <string>
#include <vector>
#include <queue>
#include<iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";

    int n = number.length() - k;

    for (int i = 0, idx = -1; i < n; i++) {
        char max = '0';
        for (int j = idx + 1; j <= k + i; j++) {
            if (max < number[j]) {
                max = number[j];
                idx = j;
            }
        }
        answer += max;
    }


    return answer;
}

int main() {
    string number = "19119891";
    int k = 4;
    cout << solution(number , k) << endl;
    return 0;
}