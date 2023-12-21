//BaekJoon_15683
//감시

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 44.332%
*/

#include <iostream>
#include <vector>

using namespace std;

int n, m;
int a[8][8];
vector<pair<int, int>> cctv;
int result = 987654321;

int dx[4]{ 0, -1, 0, 1 };
int dy[4]{ 1, 0, -1, 0 };

void Check(int x, int y, int dir) {
	dir %= 4;

	while (1) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];

		x = nx;
		y = ny;

		if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
			return;
		}
		if (a[nx][ny] == 6) {
			return;
		}
		if (a[nx][ny] != 0) {
			continue;
		}
		a[nx][ny] = -1;
	}
}

void DFS(int idx) {
	if (idx == cctv.size()) {
		int cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!a[i][j]) {
					cnt++;
				}
			}
		}
		result = min(result, cnt);

		return;
	}

	int x = cctv[idx].first;
	int y = cctv[idx].second;
	int tmp[8][8];

	for (int dir = 0; dir < 4; dir++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				tmp[i][j] = a[i][j];
			}
		}

		if (a[x][y] == 1) {
			Check(x, y, dir);
		}
		else if (a[x][y] == 2) {
			Check(x, y, dir);
			Check(x, y, dir + 2);
		}
		else if (a[x][y] == 3) {
			Check(x, y, dir);
			Check(x, y, dir + 1);
		}
		else if(a[x][y] == 4) {
			Check(x, y, dir);
			Check(x, y, dir + 1);
			Check(x, y, dir + 2);
		}
		else if (a[x][y] == 5) {
			Check(x, y, dir);
			Check(x, y, dir + 1);
			Check(x, y, dir + 2);
			Check(x, y, dir + 3);

		}

		DFS(idx + 1);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] = tmp[i][j];
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
			cin >> a[i][j];

			if (a[i][j] != 0 && a[i][j] != 6) {
				cctv.emplace_back(i, j);
			}
		}
	}

	DFS(0);

	cout << result;

	return 0;
}
