//BaekJoon_15652
//N과 M(4)


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 78.866%
*/

#include <iostream>

using namespace std;

int n, m;

int a[9];

void Func(int start, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';

		return;
	}

	for (int i = start; i <= n; i++) {
		a[cnt] = i;
		Func(i, cnt + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	Func(1, 0);

	return 0;
}
