#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int count = 1;
	int t;
	for (int i = 0; i < N; i++) {
		cin >> t;
		count--;
		count += t;
	}
	cout << count;
}