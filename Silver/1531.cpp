//BaekJoon_1531
//투명


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 66.599%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a[101][101]{ 0, };

	int n, m, x1, y1, x2, y2, sum = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		for (int x = x1; x <= x2; x++) {
			for (int y = y1; y <= y2; y++) {
				a[x][y]++;
			}
		}
	}

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (a[i][j] > m) {
				sum++;
			}
		}
	}

	cout << sum;

	return 0;
}
