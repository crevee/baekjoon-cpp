//BaekJoon_14940
//쉬운 최단거리

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 38.471%
*/

#include<iostream>
#include<queue>

using namespace std;

int map[1000][1000];
bool visited[1000][1000];

int dy[4] = { 0, 0, 1 , -1 };
int dx[4] = { -1, 1, 0, 0 };

queue<pair<int, int>> q;

int n, m;

void BFS() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (visited[nx][ny] == false) {
					map[nx][ny] = map[x][y] + 1;
					visited[nx][ny] = true;
					q.push({ nx, ny });
				}
			}
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

			if (map[i][j] == 2) {
				map[i][j] = 0;

				q.push({ i, j });
				visited[i][j] = true;
			}
			else if (map[i][j] == 0) {
				visited[i][j] = true;
			}
		}
	}
	BFS();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false) {
				cout << "-1 ";
			}
			else {
				cout << map[i][j] << " ";
			}
		}
		cout << "\n";
	}
}
