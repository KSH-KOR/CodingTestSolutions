#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int count[27] = { 0 };
	for (char c : s) {
		count[tolower(c) - 'a']++;
	}
	int max = 0;
	char mc;
	bool twoSameMax = false;
	for (int i = 0; i < 27; i++) {
		if (count[i] >= max) {
			twoSameMax = count[i] == max;
			max = count[i];
			mc = i + 'A';
		}
	}
	if (twoSameMax) {
		cout << "?" << endl;
	}
	else {
		cout << mc << endl;
	}
}