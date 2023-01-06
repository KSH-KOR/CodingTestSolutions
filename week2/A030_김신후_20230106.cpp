#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main() {
	// 1->1, 1->0, 0->1, 0->0
	bool state;
	int n;
	float q1, q2, q3, q4;
	cin >> n >> state >> q1 >> q2 >> q3 >> q4;
	float st1 = state ? q1 : q3;
	float st2 = state ? q2 : q4;
	float t1, t2;
	for (int i = 2; i <= n; i++) {
		t1 = st1 * q1 + st2 * q3;
		t2 = st1 * q2 + st2 * q4;
		st1 = t1;
		st2 = t2;
	}
	printf("%.0f\n", st1 * 1000);
	printf("%0.f\n", st2 * 1000);
}

int main() {
	int N, stat;
	float gg, gb, bg, bb;
	float g[101];
	float b[101];
	scanf("%d %d", &N, &stat);
	scanf("%f %f %f %f", &gg, &gb, &bg, &bb);
	if (stat == 0) {
		g[1] = gg;
		b[1] = gb;
	}
	else {
		g[1] = bg;
		b[1] = bb;
	}
	for (int i = 2; i <= N; i++) {
		g[i] = g[i - 1] * gg + b[i - 1] * bg;
		b[i] = g[i - 1] * gb + b[i - 1] * bb;
	}
	printf("%.0f\n", g[N] * 1000);
	printf("%0.f\n", b[N] * 1000);
	return 0;
}