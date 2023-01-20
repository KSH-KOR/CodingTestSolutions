#include <string>
#include <iostream>

using namespace std;

int main() {
	string s;
	int i = 0;
	cin >> s;
	while (s[i] != '\0') {
		cout << s[i];
		i++;
		if (i % 10 == 0) cout << endl;
	}
}