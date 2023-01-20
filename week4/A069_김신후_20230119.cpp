#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	int size = n;
	vector<int> arr;
	vector<int> answer;
	for (int i = 1; i <= n; i++) arr.push_back(i);
	int i = 0;
	while (n > 0) {
		i += (t-1);
		i =  i % n;
		answer.push_back(arr[i]);
		arr.erase(arr.begin() + i);
		n--;
	}
	cout << "<";
	for (int i = 0; i < size; i++) {
		cout << answer[i];
		if (i != size - 1) cout << ", ";
	}
	cout << ">";
}