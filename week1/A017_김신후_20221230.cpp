#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string number;
	cin >> number;
	int no[11] {0};
	int max = 0;
	for (char c : number) {
		no[c - '0']++;
	}
	no[6] = ceil((no[6] + no[9])/2.0);
	no[9] = 0;
	for(int i : no) {
		if (i > max) {
			max = i;
		}
	}
	cout << max;
}