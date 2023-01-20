#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

bool cmp(char a, char b) {
	return a > b;
}
int main() {
	string ss;
	cin >> ss;
	vector<char> s;
	for (char c : ss) {
		s.push_back(c);
	}
	sort(s.begin(), s.end(), cmp);
	string answer = "";
	for (char c : s) {
		answer += c;
	}
	cout << answer;
}