#include <string>
#include <vector>

using namespace std;

int find(const string skillList, const char skill) {
    for (int i = 0; i < sizeof(skillList); i++) {
        if (skillList[i] == skill) return i;
    }
    return -1;
}

bool check(vector<int> temp) {
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] != i) return false;
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    if (skill_trees.empty()) return 0;
    if (skill.empty()) return skill_trees.size();
    int answer = 0;
    vector<int> temp;
    for (auto skillTree : skill_trees) {
        temp.clear();
        for (auto s : skillTree) {
            int index = find(skill, s);
            if (index == -1) continue;
            temp.push_back(index);
        }
        if (check(temp)) answer++;
    }
    return answer;
}
