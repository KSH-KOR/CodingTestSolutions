
#include <iostream>
using namespace std;
int main() {
	int a, b;
	int cnt = 0;
	int max = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a; cin >> b;
		cnt -= a;
		cnt += b;
		if (cnt > max) max = cnt;
	}
	cout << max;
}