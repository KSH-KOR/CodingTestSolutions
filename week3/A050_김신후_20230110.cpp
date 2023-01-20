#include <string>
#include <iostream>

using namespace std;

int main() {
	string s;
	string answer = "";
	cin >> s;
	for (char c : s) {
		c -= 3;
		if (c < 'A') c += 26;
		answer += c;
	}
	cout << answer;
}
