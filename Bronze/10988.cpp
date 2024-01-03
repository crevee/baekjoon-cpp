//BaekJoon_10988
//팰린드롬인지 확인하기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 62.189%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string n, re_n;

	cin >> n;

	for (int i = n.size() - 1; i >= 0; i--) {
		re_n += n[i];
	}
	if (n == re_n) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}
