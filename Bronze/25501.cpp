//BaekJoon_25501
//재귀의 귀재

/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 2024KB / 1024MB
* 정답 비율 : 54.885%
*/

#include <iostream>
#include <cstring>

using namespace std;

int cnt = 0;

int Recursion(const char* s, int l, int r) {
	cnt++;

	if (l >= r) {
		return 1;
	}
	else if (s[l] != s[r]) {
		return 0;
	}
	else {
		return Recursion(s, l + 1, r - 1);
	}
}

int IsPalindrom(const char* s) {
	return Recursion(s, 0, strlen(s) - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	string s;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> s;
		cout << IsPalindrom(s.c_str());
		cout << ' ' << cnt << '\n';
		cnt = 0;
	}
}
