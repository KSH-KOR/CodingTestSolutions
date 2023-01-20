#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool cmp(string a, string b) {
	int alen = a.length(), blen = b.length();
	if (alen == blen) {
		for (int i = 0; i < alen; i++) {
			if (a[i] != b[i]) return a[i] < b[i];
		}
	}
	return alen < blen;
}

void removeDuplicate(vector<string>& v) {
	string prev = v[0];
	for (auto it = v.begin() + 1; it < v.end(); it++) {
		if (prev == *it) {
			v.erase(it--);
		}
		else {
			prev = *it;
		}
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	//freopen("input.txt", "r", stdin);
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	int n;
	string s;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector<string> v;
		/////////////////////////////////////////////////////////////////////////////////////////////
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		removeDuplicate(v);
		cout << "#" << test_case << endl;
		for (string a : v) {
			cout << a << endl;
		}
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}