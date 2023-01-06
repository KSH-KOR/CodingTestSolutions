#include <iostream>

using namespace std;

float cal(char c, float a) {
	switch (c) {
		case '@':
			return a * 3.0;
		case '%':
			return a + 5.0;
		case '#':
			return a - 7.0;
		default:
			return a;
	}
}

int main() {

    int N;
    cin >> N;
    double answer;
    char c;
    for (int i = 0; i < N; i++) {
        cin >> answer;
        while (1) {
            cin.get(c);
            if (c == '\n') {
                break;
            }
            answer = cal(c, answer);
        }
        cout << fixed;
        cout.precision(2);
        cout << answer << endl;
    }
}