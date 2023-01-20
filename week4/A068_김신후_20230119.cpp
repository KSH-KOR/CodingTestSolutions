#include<vector>
#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	string cmd;
	int input;
	vector<int> answer;
	for (int i = 0; i < N; i++) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> input;
			answer.push_back(input);
		}
		else if (cmd == "front") {
			if (answer.empty()) {
				cout << "-1" << endl;
				continue;
			}
			cout << answer.front() << endl;
		}
		else if (cmd == "back") {
			if (answer.empty()) {
				cout << "-1" << endl;
				continue;
			}
			cout << answer.back() << endl;
		}
		else if (cmd == "size") {
			cout << answer.size() << endl;
		}
		else if (cmd == "empty") {
			cout << answer.empty() ? "1" : "0"; cout << endl;
		}
		else if (cmd == "pop") {
			if (answer.empty()) {
				cout << "-1" << endl;
				continue;
			}
			cout << answer.front() << endl;
			answer.erase(answer.begin());
		}
		else {

		}
	}
}