#include <iostream>

using namespace std;

int main() {
	int winner;
	int maxScore=0;
	int t;
	int score;
	for (int i = 1; i <= 5; i++) {
		score = 0;
		for (int j = 0; j < 4; j++) {
			cin >> t;
			score += t;
		}
		if (score > maxScore) {
			winner = i;
			maxScore = score;
		}
	}
	cout << winner << endl << maxScore << endl;
}