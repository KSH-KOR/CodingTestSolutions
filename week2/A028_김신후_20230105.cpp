#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main() {
	string a, b;
		cin >> a;
		cin >> b;
		vector<int> answer;
		int al = a.length() - 1;
		int bl = b.length() - 1;
		int t;
		int c = 0;
		while (true) {
			t = (al < 0 ? 0 : a[al] - 48) + (bl < 0 ? 0 : b[bl] - 48);
			t += c;
			c = t >= 10 ? 1 : 0;
			t = t % 10;
			answer.push_back(t);
			al--; bl--;
			if (al < 0 && bl < 0) break;
		}
		if (c == 1)answer.push_back(c);
		vector<int>::iterator it = answer.end() - 1;
		while (true) {
			cout << *it;
			if (it == answer.begin()) break;
			it--;
		}
		cout << endl;
	
	return 0;
}