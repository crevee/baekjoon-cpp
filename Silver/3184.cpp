//BaekJoon_3184
//양

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2904KB / 128MB
* 정답 비율 : 63.303%
*/

#include <iostream>

using namespace std;

char map[250][250];
bool visited[250][250];

int r, c;
int dx[4]{ 0, 0, -1, 1 };
int dy[4]{ -1, 1, 0, 0 };

int remain_sheep = 0, remain_wolf = 0;
int current_wolf = 0, current_sheep = 0;

void DFS(int x, int y) {
	if (map[x][y] == 'o') {
		current_sheep++;
	}
	else if (map[x][y] == 'v') {
		current_wolf++;
	}

	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
			continue;
		}
		if (visited[nx][ny] == false && map[nx][ny] != '#') {
			DFS(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			current_wolf = 0;
			current_sheep = 0;

			if (visited[i][j] == false && map[i][j] != '#') {
				DFS(i, j);

				if (current_sheep > current_wolf) {
					remain_sheep += current_sheep;
				}
				else {
					remain_wolf += current_wolf;
				}
			}
		}
	}
	cout << remain_sheep << ' ' << remain_wolf;

	return 0;
}
