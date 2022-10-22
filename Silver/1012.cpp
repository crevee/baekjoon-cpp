//BaekJoon_1012
//유기농 배추

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 37.140%
*/

#include <iostream>

int t, m, n, k;
bool map[50][50]{};
bool visited[50][50];

int dy[4] = { 0, 0, -1, 1 };
int dx[4] = { -1, 1, 0, 0 };

void Reset() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			map[i][j] = 0;
			visited[i][j] = 0;
		}
	}
}

void Dfs(int y, int x) {
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n) {
			continue;
		}

		if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
			Dfs(ny, nx);
		}
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> t;

	while (t--) {
		std::cin >> m >> n >> k;

		Reset();

		while (k--) {
			int x, y;
			std::cin >> x >> y;
			map[y][x] = 1;
		}

		int cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (map[i][j] == 1 && visited[i][j] == 0) {
					Dfs(i, j);
					cnt++;
				}
			}
		}

		std::cout << cnt << '\n';
	}

	return 0;
}
