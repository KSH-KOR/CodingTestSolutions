#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main() {
	int N;
	cin >> N;
	int x, y;
	vector<pair<int, int>> points;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		points.push_back(make_pair(x, y));
	}
	sort(points.begin(), points.end(), comp);
	for (auto point : points) {
		cout << point.first << " " << point.second << endl;
	}
}