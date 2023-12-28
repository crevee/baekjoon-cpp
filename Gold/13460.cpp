//BaekJoon_13460
//구슬 탈출 2

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 27.778%
*/

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct INFO {
	int rx, ry, bx, by, cnt;
};

INFO start;
char map[10][11];

int BFS() {
	const int dy[]{ -1, 1, 0, 0 };
	const int dx[]{ 0, 0, -1, 1 };

	int visited[10][10][10][10]{ 0, };

	queue<INFO> q;
	q.emplace(start);
	visited[start.ry][start.rx][start.by][start.bx] = 1;

	int result = -1;

	while (!q.empty()) {
		INFO cur = q.front();

		q.pop();

		if (cur.cnt > 10) {
			break;
		}
		
		if (map[cur.ry][cur.rx] == 'O' && map[cur.by][cur.bx] != 'O') {
			result = cur.cnt;
			break;
		}

		for (int i = 0; i < 4; i++) {
			int nx_ry = cur.ry;
			int nx_rx = cur.rx;
			int nx_by = cur.by;
			int nx_bx = cur.bx;

			while (1) {
				if (map[nx_ry][nx_rx] != '#' && map[nx_ry][nx_rx] != 'O') {
					nx_ry += dy[i];
					nx_rx += dx[i];
				}
				else {
					if (map[nx_ry][nx_rx] == '#') {
						nx_ry -= dy[i];
						nx_rx -= dx[i];
					}
					break;
				}
			}

			while (1) {
				if (map[nx_by][nx_bx] != '#' && map[nx_by][nx_bx] != 'O') {
					nx_by += dy[i];
					nx_bx += dx[i];
				}
				else {
					if (map[nx_by][nx_bx] == '#') {
						nx_by -= dy[i];
						nx_bx -= dx[i];
					}
					break;
				}
			}

			if (nx_ry == nx_by && nx_rx == nx_bx) {
				if (map[nx_ry][nx_rx] != 'O') {
					int red_dist = abs(nx_ry - cur.ry) + abs(nx_rx - cur.rx);
					int blue_dist = abs(nx_by - cur.by) + abs(nx_bx - cur.bx);

					if (blue_dist > red_dist) {
						nx_by -= dy[i];
						nx_bx -= dx[i];
					}
					else {
						nx_ry -= dy[i];
						nx_rx -= dx[i];
					}
				}
			}

			if (visited[nx_ry][nx_rx][nx_by][nx_bx] == 0) {
				visited[nx_ry][nx_rx][nx_by][nx_bx] = 1;
				
				INFO nx;
				nx.ry = nx_ry;
				nx.rx = nx_rx;
				nx.by = nx_by;
				nx.bx = nx_bx;
				nx.cnt = cur.cnt + 1;

				q.emplace(nx);
			}
		}
	}
	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'R') {
				start.ry = i;
				start.rx = j;
			}
			if (map[i][j] == 'B') {
				start.by = i;
				start.bx = j;
			}
		}
	}

	start.cnt = 0;

	cout << BFS();
}
