//BaekJoon_10162
//전자레인지

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 64MB
* 정답 비율 : 60.877%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, a, b, c;

	cin >> t;

	if (t % 10) {
		cout << -1;

		return 0;
	}

	a = t / 300;

	t %= 300;

	b = t / 60;

	t %= 60;

	c = t / 10;

	cout << a << ' ' << b << ' ' << c;
	return 0;
}
