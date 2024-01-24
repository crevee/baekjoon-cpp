//BaekJoon_11660
//구간 합 구하기 5

/*
* 제한 시간 : 128ms / 1s
* 메모리 제한 : 6264KB / 256MB
* 정답 비율 : 44.110%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<vector<int>> v(n + 1, vector<int>(n + 1));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> v[i][j];

			v[i][j] = v[i][j - 1] + v[i - 1][j] - v[i - 1][j - 1] + v[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int x1, x2, y1, y2;
		int result;
		 
		cin >> x1 >> y1 >> x2 >> y2;

		result = v[x2][y2] - v[x1 - 1][y2] - v[x2][y1 - 1] + v[x1 - 1][y1 - 1];

		cout << result << '\n';
	}
	return 0;
}
