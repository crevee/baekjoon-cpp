//BaekJoon_17472
//다리 만들기 2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2080KB / 512MB
* 정답 비율 : 33.152%
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int map[101][101], n, m, sum;
int dx[4]{ -1, 0, 1, 0 };
int dy[4]{ 0, 1, 0, -1 };

bool visited[101][101]{ false, };

vector<int> parent;
vector<vector<pair<int, int>>> islands;
vector<pair<int, int>> min_list;

typedef struct Edge {
	int s, e, v;

	bool operator > (const Edge& tmp) const {
		return v > tmp.v;
	}
} Edge;

priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

int Find(int a) {
	if (a == parent[a]) {
		return a;
	}
	else {
		return parent[a] = Find(parent[a]);
	}
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);

	if (a != b) {
		parent[b] = a;
	}
}

void BFS(int i, int j) {
	queue<pair<int, int >> q;

	min_list.clear();

	q.emplace(i, j);
	min_list.emplace_back(i, j);
	visited[i][j] = true;
	map[i][j] = sum;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int k = 0; k < 4; k++) {
			int nx = dx[k];
			int ny = dy[k];

			while (x + nx >= 0 && x + nx < n && y + ny >= 0 && y + ny < m) {
				if (visited[x + nx][y + ny] == false && map[x + nx][y + ny] != 0) {
					int now_i = x + nx;
					int now_j = y + ny;

					map[now_i][now_j] = sum;
					visited[now_i][now_j] = true;

					min_list.emplace_back(now_i, now_j);
					q.emplace(now_i, now_j);
				}
				else {
					break;
				}

				if (nx < 0) {
					nx--;
				}
				else if (nx > 0) {
					nx++;
				}
				else if (ny < 0) {
					ny--;
				}
				else if (ny > 0) {
					ny++;
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	sum = 1;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] != 0 && visited[i][j] != true) {
				BFS(i, j);
				sum++;
				islands.emplace_back(min_list);
			}
		}
	}

	for (size_t i = 0; i < islands.size(); i++) {
		vector<pair<int, int>> now = islands[i];

		for (size_t j = 0; j < now.size(); j++) {
			int x = now[j].first;
			int y = now[j].second;
			int now_s = map[x][y];

			for (int k = 0; k < 4; k++) {
				int nx = dx[k];
				int ny = dy[k];
				int length = 0;

				while (x + nx >= 0 && x + nx < n && y + ny >= 0 && y + ny < m) {
					if (map[x + nx][y + ny] == now_s) {
						break;
					}
					else if (map[x + nx][y + ny] != 0) {
						if (length > 1) {
							pq.emplace(Edge{ now_s, map[x + nx][y + ny], length });
						}
						break;
					}
					else {
						length++;
					}

					if (nx < 0) {
						nx--;
					}
					else if (nx > 0) {
						nx++;
					}
					else if (ny < 0) {
						ny--;
					}
					else if (ny > 0) {
						ny++;
					}
				}
			}
		}
	}

	parent.resize(sum);

	for (size_t i = 0; i < parent.size(); i++) {
		parent[i] = i;
	}

	int use_edge = 0, result = 0;

	while (!pq.empty()) {
		Edge now = pq.top();

		pq.pop();

		if (Find(now.s) != Find(now.e)) {
			Union(now.s, now.e);

			result = result + now.v;

			use_edge++;
		}
	}

	if (use_edge == sum - 2) {
		cout << result << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}
