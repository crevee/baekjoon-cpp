//BaekJoon_7569
//토마토

/*
* 제한 시간 : 100ms / 1s
* 메모리 제한 : 12148KB / 256MB
* 정답 비율 : 41.355%
*/

#include <iostream>
#include <queue>

int tomato[103][103][103];
int dist[103][103][103];

int dx[6] = { 0, 0, 1, 0, 0, -1 };
int dy[6] = { 0, -1, 0, 0, 1, 0 };
int dz[6] = { 1, 0, 0, -1, 0, 0 };

int day = 0;

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int m, n, h;

	std::cin >> m >> n >> h;

	std::queue <std::pair<int, std::pair<int, int>>> q;


	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				std::cin >> tomato[k][i][j];

				if (tomato[k][i][j] == 1) {
					q.push({ k, {i, j} });
				}
				if (tomato[k][i][j] == 0) {
					dist[k][i][j] = -1;
				}
			}
		}
	}

	while (!q.empty()) {
		std::pair<int, std::pair<int, int>> cur = q.front();

		q.pop();

		for (int dir = 0; dir < 6; dir++) {
			int nx = cur.second.first + dx[dir];
			int ny = cur.second.second + dy[dir];
			int nz = cur.first + dz[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) {
				continue;
			}
			if (dist[nz][nx][ny]>=0) {
				continue;
			}

			dist[nz][nx][ny] = dist[cur.first][cur.second.first][cur.second.second] + 1;

			q.push({ nz, {nx, ny} });

		}
	}

	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dist[k][i][j] == -1) {
					std::cout << -1;
					return 0;
				}
				day = Max(day, dist[k][i][j]);
			}
		}
	}
	std::cout << day;
}
