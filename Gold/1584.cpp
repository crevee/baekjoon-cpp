//BaekJoon_1584
//게임

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 4804KB / 128MB
* 정답 비율 : 41.056%
*/

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int map[501][501];
bool visited[501][501];

int dx[4]{ -1, 1, 0, 0 };
int dy[4]{ 0, 0, -1, 1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x1, x2, y1, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = min(x1, x2); i <= max(x1, x2); i++) {
			for (int j = min(y1, y2); j <= max(y1, y2); j++) {
				map[i][j] = 1;
			}
		}
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		int x1, x2, y1, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = min(x1, x2); i <= max(x1, x2); i++) {
			for (int j = min(y1, y2); j <= max(y1, y2); j++) {
				visited[i][j] = true;
			}
		}
	}

	bool check = true;
	deque <tuple<int, int, int>> dq;

	dq.emplace_front(0, 0, 0);

	while (!dq.empty()) {
		auto p = dq.front();

		dq.pop_front();

		if (get<0>(p) == 500 && get<1>(p) == 500) {
			cout << get<2>(p);

			check = false;
			break;
		}

		for (int i = 0; i < 4; i++) {
			int nx = get<0>(p) + dx[i];
			int ny= get<1>(p) + dy[i];

			if (nx < 0 || nx > 500 || ny < 0 || ny > 500 || visited[nx][ny]) {
				continue;
			}
			else {
				visited[nx][ny] = true;

				if (map[nx][ny] == 1) {
					dq.emplace_back(nx, ny, get<2>(p) + 1);
				}
				else {
					dq.emplace_front(nx, ny, get<2>(p));
				}
			}
		}
	}

	if (check) {
		cout << "-1";
	}
	return 0;
}
