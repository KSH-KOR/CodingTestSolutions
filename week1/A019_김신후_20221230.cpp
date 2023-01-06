
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int d = a * b * c;
	int answer[10] = {0};
	while (d > 0) {
		answer[d % 10]++;
		d /= 10;
	}
	for (auto x : answer) {
		cout << x << endl;
	}
}