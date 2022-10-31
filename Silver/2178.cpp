//BaekJoon_2178
//미로 탐색

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2200KB / 192MB
* 정답 비율 : 41.817%
*/

#include <iostream>
#include <string>
#include <queue>

int n, m;
std::string s[100];
int a[100][100];

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };


int Bfs(int x, int y) {
	std::queue<std::pair<int, int>> q;
	q.push({ x, y });
	a[x][y] = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				continue;
			}
			if (a[nx][ny] == 0 && s[nx][ny] == '1') {
				a[nx][ny] = a[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}
	return a[n - 1][m - 1];
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
			std::cin >> s[i];
	}

	std::cout << Bfs(0, 0);

	return 0;
}
