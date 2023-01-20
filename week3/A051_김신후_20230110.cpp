#include <string>
#include <iostream>

using namespace std;

int main() {
	string s;
	int answer = 0;
	int t;
	int y;
	cin >> s;
	for (char c : s) {
		t = c - 'A';
		y = t / 3;
		if (y < 5) {
			answer += y + 3;
		}
		else if(t < 19) {
			answer += 8;
		}
		else if (t < 22) {
			answer += 9;
		}
		else {
			answer += 10;
		}
	}
	cout << answer;
}