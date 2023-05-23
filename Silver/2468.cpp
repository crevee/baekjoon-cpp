//BaekJoon_2468
//안전 영역


/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2308KB / 128MB
* 정답 비율 : 34.427%
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, cnt;
int temp[101][101], map[101][101];
bool visited[101][101];
int dy[] = { 0, 0, -1, 1 };
int dx[] = { -1, 1, 0, 0 };
vector<int> v;

void DFS(int y, int x) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= n) {
			continue;
		}
		if (map[ny][nx] && !visited[ny][nx]) {
			visited[ny][nx] = true;
			DFS(ny, nx);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int max_height = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> temp[i][j];

			if (temp[i][j] > max_height) {
				max_height = temp[i][j];
			}
		}
	}

	for (int h = 1; h <= max_height; h++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (temp[i][j] < h) {
					map[i][j] = 0;
				}
				else {
					map[i][j] = 1;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] && !visited[i][j]) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		v.push_back(cnt);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				map[i][j] = 0;
				visited[i][j] = 0;
			}
		}
		cnt = 0;
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1];
}
