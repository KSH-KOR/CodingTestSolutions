#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for (vector<int> v : commands) {
        temp.clear();
        for (int i = v[0] - 1; i < v[1]; i++) {
            temp.push_back(array[i]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[v[2] - 1]);
    }
    return answer;
}