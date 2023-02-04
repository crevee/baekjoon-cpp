//BaekJoon_2583
//영역 구하기


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2064KB / 128MB
* 정답 비율 : 56.828%
*/

#include <iostream>
#include <queue>

int n, m, k;
int paper[100][100]{};
int area[100]{};
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

std::queue<std::pair<int, int>> q;

int Bfs() {
	int count = 0;

	while (q.empty() == 0) {
		int x = q.front().second;
		int y = q.front().first;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
				continue;
			}
			if (paper[ny][nx] == 0) {
				count++;
				paper[ny][nx] = 1;
				q.push({ ny,nx });
			}
		}
	}
	return count;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int count = 0;
	int x1, y1, x2, y2;

	std::cin >> m >> n >> k;

	for (int i = 0; i < k; i++) {
		std::cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++) {
			for (int k = x1; k < x2; k++) {
				paper[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (paper[i][j] == 0) {
				q.push({ i,j });

				area[count++] = Bfs();

				if (area[count - 1] == 0) {
					area[count - 1] = 1;
				}
			}
		}
	}

	std::sort(area, area + count);

	std::cout << count << '\n';

	for (int i = 0; i < count; i++) {
		std::cout << area[i] << ' ';
	}
}
