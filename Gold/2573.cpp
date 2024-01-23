//BaekJoon_2573
//빙산

/*
* 제한 시간 : 100ms / 1s
* 메모리 제한 : 2816KB / 256MB
* 정답 비율 : 26.006%
*/

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int map[300][300];
int tmp[300][300];

bool visited[300][300];

int dx[4]{ 0, 1, 0, -1 };
int dy[4]{ 1, 0, -1, 0 };

int n, m;

void Check(int r, int c) {
	queue<pair<int, int>>q;

	q.emplace(r, c);

	while (!q.empty()) {
		int cur_r = q.front().first;
		int cur_c = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nr = cur_r + dx[i];
			int nc = cur_c + dy[i];

			if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
				if (map[nr][nc] != 0 && !visited[nr][nc]) {
					q.emplace(nr, nc);
					visited[nr][nc] = true;
				}
			}
		}
	}
}

void Melt() {
	memset(tmp, 0, sizeof(tmp));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0) {
				continue;
			}

			int water_cnt = 0;

			for (int k = 0; k < 4; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];

				if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
					continue;
				}

				if (map[nx][ny] == 0) {
					water_cnt++;
				}
			}
			int val = map[i][j] - water_cnt;

			if (val > 0) {
				tmp[i][j] = val;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			map[i][j] = tmp[i][j];
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	int time = 0;

	while (1) {
		int chunk_ice = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!visited[i][j] && map[i][j] != 0) {
					Check(i, j);
					chunk_ice++;
				}
			}
		}
		if (chunk_ice == 0) {
			cout << 0;
			break;
		}
		else if (chunk_ice >= 2) {
			cout << time;
			break;
		}

		time++;
		Melt();
		memset(visited, false, sizeof(visited));
	}
	return 0;
}
