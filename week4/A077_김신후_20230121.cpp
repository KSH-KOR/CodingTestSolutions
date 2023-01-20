#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

int main() {
	int t;
	vector<pair<int, int>> scores;
	for (int i = 1; i <= 8; i++) {
		cin >> t;
		scores.push_back(make_pair(i, t));
	}
	sort(scores.begin(), scores.end(), cmp);
	int answer = 0;
	vector<int> answerIndex;
	for (int i = 0; i < 5; i++) {
		answer += scores[i].second;
		answerIndex.push_back(scores[i].first);
	}
	cout << answer << endl;
	sort(answerIndex.begin(), answerIndex.end());
	for (int i : answerIndex) {
		cout << i << " ";
	}
	
	return 0;
}