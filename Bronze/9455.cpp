//BaekJoon_9455
//박스

/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 74.371%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, m, n, result;
	bool map[100][100];


	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> m >> n;

		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				cin >> map[j][k];
			}
		}
		
		result = 0;

		for (int k = 0; k < n; k++) {
			int tmp = 0;

			for (int j = m - 1; j >= 0; j--) {
				if (map[j][k] == 1) {
					result += m - 1 - j - tmp;
					tmp++;
				}
			}
		}
		cout << result << '\n';
	}
}
