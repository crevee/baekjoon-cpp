//BaekJoon_2448
//별 찍기 - 11

/*
* 제한 시간 : 436ms / 1s
* 메모리 제한 : 20452KB / 256MB
* 정답 비율 : 41.960%
*/

#include <iostream>

using namespace std;

char map[3072][6144];

void Star(int n, int x, int y) {
	if (n == 3) {
		map[y][x] = '*';

		map[y + 1][x - 1] = '*';
		map[y + 1][x + 1] = '*';

		for (int i = 0; i < 5; i++) {
			map[y + 2][x - 2 + i] = '*';
		}
	}
	else {
		Star(n / 2, x, y);
		Star(n / 2, x - n / 2, y + n / 2);
		Star(n / 2, x - n / 2 + n, y + n / 2);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			map[i][j] = ' ';
		}
	}

	Star(n, n - 1, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			cout << map[i][j];
		}
		cout << '\n';
	}

	return 0;
}
