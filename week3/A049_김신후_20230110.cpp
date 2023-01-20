#include <string>
#include <iostream>

using namespace std;

const string vowel = "aeiou";

bool test(string s) {
	bool hasVowel = false;
	int vowelCount = 0;
	int consonantCount = 0;
	char prev = '-1';
	for (char c : s) {
		if (prev == c) {
			if (c != 'e' && c != 'o') return false;
		}
		prev = c;
		if (vowel.find(c) != string::npos) {
			hasVowel = true;
			vowelCount++;
			consonantCount = 0;
		}
		else {
			consonantCount++;
			vowelCount = 0;
		}
		if (vowelCount >= 3 || consonantCount >= 3) return false;
	}
	return hasVowel;
}

int main() {
	string s;
	while (true) {
		cin >> s;
		if (s == "end") break;
		if (test(s)) {
			cout << "<" << s << "> is acceptable." << endl;
		}
		else {
			cout << "<" << s << "> is not acceptable." << endl;
		}
	}
	return 0;
}