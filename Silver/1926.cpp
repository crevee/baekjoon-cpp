//BaekJoon_1926
//어린 왕자


/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 10936KB / 128MB
* 정답 비율 : 40.991%
*/

#include<iostream>
#include<algorithm>
#include<vector>

int n, m;
int map[501][501];
bool visited[501][501];

int dy[] = { 0, 0, -1, 1 };
int dx[] = { 1, -1, 0 , 0 };

std::vector<int> v;

int area = 1;
int count = 0;

void Dfs(int y, int x) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= m) {
			continue;
		}
		if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
			visited[ny][nx] = true;
			area++;
			Dfs(ny, nx);
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 1 && visited[i][j] == 0) {
				Dfs(i, j);
				v.push_back(area);
				count++;
				area = 1;
			}
		}
	}

	std::sort(v.begin(), v.end());

	std::cout << count << '\n';

	if (count == 0) {
		std::cout << 0 << '\n';
	}
	else {
		std::cout << v[count - 1] << '\n';
	}
}
