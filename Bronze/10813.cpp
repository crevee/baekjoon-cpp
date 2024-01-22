//BaekJoon_10813
//공 바꾸기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 64.910%
*/

#include <iostream>

using namespace std;

int a[101];

void Swap(int x, int y) {
	int tmp = a[x];

	a[x] = a[y];
	a[y] = tmp;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;

		Swap(x, y);
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}
