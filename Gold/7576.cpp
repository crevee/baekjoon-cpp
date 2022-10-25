//BaekJoon_7576
//토마토

/*
* 제한 시간 : 84ms / 1s
* 메모리 제한 : 10208KB / 256MB
* 정답 비율 : 35.240%
*/

#include <iostream>
#include <queue>

int m, n;
int TomatoMap[1000][1000];

std::queue<std::pair<int, int>> q;

int result = 0;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void TomatoBfs() {
	while (q.empty() != 1) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
				if (TomatoMap[nx][ny] == 0) {
					TomatoMap[nx][ny] = TomatoMap[x][y] + 1;
					q.push(std::make_pair(nx, ny));
				}
			}
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> TomatoMap[i][j];

			if (TomatoMap[i][j] == 1) {
				q.push(std::make_pair(i, j));
			}
		}
	}
	TomatoBfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (TomatoMap[i][j] == 0) {
				std::cout << -1 << "\n";
				
				return 0;
			}

			if (result < TomatoMap[i][j]) {
				result = TomatoMap[i][j];
			}
		}
	}

	std::cout << result - 1 << '\n';


	return 0;
}
