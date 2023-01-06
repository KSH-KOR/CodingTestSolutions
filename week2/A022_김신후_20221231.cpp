#include <iostream>
#include <cmath>
using namespace std;
int c(int s, int d) {
	return s / d + 1;
}
int main() {
	int N;
	cin >> N;
	int t;
	const int m = 15;
	const int y = 10;
	int price_m = 0;
	int price_y = 0;
	for (int i = 0; i < N; i++) {
		cin >> t;
		price_m += c(t , 60) * m;
		price_y += c(t , 30) * y;
	}
	if (price_m > price_y) {
		cout << "Y " << price_y;
	}
	else {
		if (price_m == price_y) {
			cout << "Y M " << price_y;
		}
		else {
			cout << "M " << price_m;
		}
	}
}