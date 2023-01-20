#include <string>
#include <iostream>

using namespace std;

int main() {
	string s;
	int n;
	int answer;
	int plus;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		answer = 0;
		plus = 1;
		for (char c : s) {
			if (c == 'O') {
				answer += plus++;
			}
			else {
				plus = 1;
			}
		}
		cout << answer << endl;
	}
	
}