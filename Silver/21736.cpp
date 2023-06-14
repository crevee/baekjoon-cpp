//BaekJoon_21736
//헌내기는 친구가 필요해


/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2992KB / 1024MB
* 정답 비율 : 61.472%
*/

#include<iostream>
#include<queue>

using namespace std;

int n, m, cnt = 0;
char map[601][601];
bool visited[601][601];

int dy[4] = { 1, 0, 0, -1 };
int dx[4] = { 0, 1, -1, 0 };

void BFS(int i, int j) {
	visited[i][j] = true;

	queue<pair<int, int>> q;
	q.push(pair<int, int>(i, j));

	while (!q.empty()) {
		int n_x = q.front().first;
		int n_y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int x = n_x + dx[i];
			int y = n_y + dy[i];

			if (x >= 0 && y >= 0 && x < n && y < m && visited[x][y] == false) {
				if (map[x][y] == 'X') {
					continue;
				}
				if (map[x][y] == 'P') {
					cnt++;
				}
				visited[x][y] = true;
				q.push(pair<int, int>(x, y));
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
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'I') {
				BFS(i, j);
			}
		}
	}

	if (cnt == 0) {
		cout << "TT";
	}
	else {
		cout << cnt;
	}
}
