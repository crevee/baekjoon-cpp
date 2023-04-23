//BaekJoon_14502
//연구소

/*
* 제한 시간 : 1076ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 54.851%
*/

#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int n, m, temp_count = 3, answer = 0;
int map[10][10];
int copy_map[10][10];
bool visited[10][10];
int dxy[4][2] = { {-1, 0}, {1,0}, {0, -1}, {0,1} };

void Insert() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> map[i][j];
		}
	}
}

void BFS() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			copy_map[i][j] = map[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (copy_map[i][j] == 2) {
				queue<pair<int, int>>q;

				q.push({ i, j });
				visited[i][j] = true;

				while (!q.empty()) {
					int current_y = q.front().first;
					int current_x = q.front().second;
					q.pop();

					for (int next = 0; next < 4; next++) {
						int next_y = current_y + dxy[next][0];
						int next_x = current_x + dxy[next][1];

						if (!visited[next_y][next_x] && copy_map[next_y][next_x]
							== 0) {
							q.push({ next_y, next_x });
							visited[next_y][next_x] = true;
							copy_map[next_y][next_x] = 2;
						}
					}
				}
			}
		}
	}

	memset(visited, false, sizeof(visited));

	int temp = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (copy_map[i][j] == 0) {
				temp++;
			}
		}
	}

	if (temp > answer) {
		answer = temp;
	}
}

void SearchWall() {
	if (temp_count == 0) {
		return BFS();
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (map[i][j] == 0) {
				temp_count--;
				map[i][j] = 1;
				SearchWall();
				temp_count++;
				map[i][j] = 0;
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	memset(map, -1, sizeof(map));
	memset(copy_map, -1, sizeof(copy_map));

	Insert();
	SearchWall();

	cout << answer;
}
