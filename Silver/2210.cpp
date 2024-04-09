//BaekJoon_2210
//숫자판 점프

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2536KB / 128MB
* 정답 비율 : 74.326%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[5][5];
int dx[4]{ 0, 1, 0, -1 };
int dy[4]{ 1, 0, -1, 0 };

vector<int>v;


void DFS(int x, int y, int n, int cnt) {
	if (cnt == 6) {
		v.emplace_back(n);

		return;
	}

	for (size_t i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5) {
			continue;
		}
		DFS(nx, ny, n * 10 + map[nx][ny], cnt + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			DFS(i, j, 0, 0);
		}
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	cout << v.size();
}
