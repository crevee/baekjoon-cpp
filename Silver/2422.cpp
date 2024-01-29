//BaekJoon_2422
//한윤정이 이탈리아에 가서 아이스크림을 사먹는데


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 40.279%
*/

#include <iostream>

using namespace std;

bool check[201][201];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int result = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;

		cin >> x >> y;

		check[x][y] = true;
		check[y][x] = true;

	}

	for (int i = 1; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (check[i][j] || check[j][k] || check[i][k]) {
					continue;
				}
				result++;
			}
		}
	}
	cout << result;

	return 0;
}
