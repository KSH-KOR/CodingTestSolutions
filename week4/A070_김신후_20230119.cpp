#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << "1";
		return 0;
	}
	if (n == 2 || n == 3) {
		cout << "2";
		return 0;
	}
	bool t = n%2 == 0;
	queue<int> que;
	for (int i = 2; i <= n; i+=2) {
		que.push(i);
	}
	n /= 2;
	if (t) {
		que.pop();
		n--;
	}
	while (n > 1) {
		que.push(que.front());
		que.pop(); que.pop();
		n--;
	}
	cout << que.front() << endl;
}