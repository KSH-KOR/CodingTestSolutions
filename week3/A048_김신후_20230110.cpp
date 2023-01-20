#include <string>
#include <iostream>

using namespace std;
bool is(string s) {
	int count[27] = { 0 };
	char prev = tolower(s[0]);
	for (char c : s) {
		c = tolower(c);
		if (count[c - 'a'] == 1) return false;
		if (c != prev) {
			count[prev - 'a'] = 1;
		}
		prev = c;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	string s;
	int count = 0;
	for (int i = 0; i < n; i++) {
		
		cin >> s;
		if (is(s)) count++;
	}
	cout << count;
}