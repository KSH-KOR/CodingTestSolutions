#include <iostream>

using namespace std;

int main() {
	bool m[43] = { false };
	int t;
	for (int i = 0; i < 10; i++) {
		cin >> t;
		m[t % 42] = true;
	}
	int count = 0;
	for (int i = 0; i < 43; i++) {
		if (m[i]) count++;
	}
	cout << count;
}