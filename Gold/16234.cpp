//BaekJoon_16234
//인구이동

/*
* 제한 시간 : 108ms / 2s
* 메모리 제한 : 2036KB / 512MB
* 정답 비율 : 54.851%
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int n, l, r, a[51][51];
bool visited[51][51];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0 , 0 };

queue<pair<int, int>> q;
vector<pair<int, int>> v;

bool flag = true;
int sum = 0;

void BFS(pair<int, int> start) {
	q.push(start);
	visited[start.first][start.second] = true;

	while (!q.empty()) {
		pair<int, int> temp = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_a = temp.first + dx[i];
			int next_b = temp.second + dy[i];

			if (next_a >= 0 && next_b >= 0 &&
				next_a < n && next_b < n && !visited[next_a][next_b]) {

				if (abs(a[next_a][next_b] - a[temp.first][temp.second]) >= l &&
					abs(a[next_a][next_b] - a[temp.first][temp.second]) <= r) {
					q.push({next_a, next_b});
					visited[next_a][next_b] = true;
					v.push_back({ next_a, next_b });
					sum += a[next_a][next_b];
				}
			}
		}
	}
}

void Clear() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = false;
		}
	}
}

int main() {
	int days = 0;

	cin >> n >> l >> r;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	while (flag) {
		flag = false;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (!visited[i][j]) {
					v.clear();
					v.push_back({ i,j });
					sum = a[i][j];
					BFS({ i, j });
				}

				if (v.size() >= 2) {
					flag = true;

					for (int i = 0; i < v.size(); i++) {
						a[v[i].first][v[i].second] = sum / v.size();
					}
				}
			}
		}

		if (flag) {
			days++;
		}
		Clear();
	}
	cout << days;
}
