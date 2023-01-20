#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	string command;
	vector<int> stack;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			int k;
			cin >> k;
			stack.push_back(k);
		}
		else if (command == "pop") {
			if (stack.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stack.back() << endl;
				stack.pop_back();
			}
		}
		else if (command == "size") {
			cout << stack.size() << endl;
		}
		else if (command == "empty") {
			cout << stack.empty() ? 0 : 1;
			cout << endl;
		}
		else if (command == "top") {
			if (stack.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stack.back() << endl;			
			}
		}
		else {
			return 0;
		}
		
	}
}