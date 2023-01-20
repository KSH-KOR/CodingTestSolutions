#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s;
	int n;
	cin >> n;
	int count[27] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> s;
		count[tolower(s[0]) - 'a']++;
	}
	vector<char> answer;
	for (int i = 0; i < 27; i++) {
		if (count[i] >= 5) {
			answer.push_back(i + 'a');
		}
	}
	if (answer.size() == 0) {
		cout << "PREDAJA" << endl;
	}
	else {
		sort(answer.begin(), answer.end());
		for (char c : answer) {
			cout << c;
		}
	}
}