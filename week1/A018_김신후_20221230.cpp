#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	int N;
	vector<int> a;
	vector<int> b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		b.push_back(t);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int answer = 0;
	for (int i = 0; i < N; i++) {
		answer += (a[i] * b[N-i-1]);
	}
	cout << answer;
}