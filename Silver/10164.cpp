//BaekJoon_10164
//격자상의 경로

/*
* 제한 시간 : 68ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 36.445%
*/

#include <iostream>

using namespace std;

int Func(int x, int y, int px, int py) {
	if (x == px && y == py) {
		return 1;
	}
	if (x > px || y > py) {
		return 0;
	}
	return Func(x + 1, y, px, py) + Func(x, y + 1, px, py);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;

	cin >> n >> m >> k;

	if (k == 0) {
		cout << Func(1, 1, n, m);
	}
	else {
		int h = (k - 1) / m;
		int w = (k - 1) % m;

		cout << Func(1, 1, h + 1, w + 1) * Func(h + 1, w + 1, n, m);
	}
	return 0;
}
