//BaekJoon_4179
//불!

/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 3136KB / 256MB
* 정답 비율 : 20.698%
*/

#include <iostream>
#include <queue>

using namespace std;

char map[1001][1001];

int dx[4]{ 0, 0, 1, -1 };
int dy[4]{ 1, -1, 0, 0 };

int r, c;

queue<pair<int, int>>jihoon, fire;

void FireSpread() {
	int size = fire.size();

	while (size--) {
		int x = fire.front().first;
		int y = fire.front().second;

		fire.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
				continue;
			}
			if (map[nx][ny] == '#') {
				continue;
			}
			map[nx][ny] = '#';
			fire.emplace(nx, ny);
		}
	}
}

static bool JihoonMove() {
	int size = jihoon.size();

	if (size == 0) {
		cout << "IMPOSSIBLE";

		exit(0);
	}
	while (size--) {
		int x = jihoon.front().first;
		int y = jihoon.front().second;

		jihoon.pop();

		if (x == 0 || x == r - 1 || y == 0 || y == c - 1) {
			return true;
		}

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
				continue;
			}
			if (map[nx][ny] == '#') {
				continue;
			}
			map[nx][ny] = '#';
			jihoon.emplace(nx, ny);
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		cin >> map[i];

		for (int j = 0; j < c; j++) {
			if (map[i][j] == 'J') {
				jihoon.emplace(i, j);
				map[i][j] = '#';
			}
			else if (map[i][j] == 'F') {
				fire.emplace(i, j);
				map[i][j] = '#';
			}
		}
	}

	int result = 0;

	do {
		FireSpread();
		result++;
	} while (!JihoonMove());

	cout << result;
}
