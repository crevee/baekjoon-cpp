//BaekJoon_1854
//K번째 최단경로 찾기

/*
* 제한 시간 : 756ms / 2s
* 메모리 제한 : 9708KB / 256MB
* 정답 비율 : 35.195%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

static int w[1001][1001];
priority_queue<int> dist_q[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;

	cin >> n >> m >> k;

	for (int i = 0; i < m; i++) {
		int a, b, c;

		cin >> a >> b >> c;

		w[a][b] = c;
	}

	priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.emplace(0, 1);

	dist_q[1].emplace(0);

	while (!pq.empty()) {
		pair<int, int> u = pq.top();

		pq.pop();

		for (int adj_node = 1; adj_node <= n; adj_node++) {
			if (w[u.second][adj_node] != 0) {
				if (dist_q[adj_node].size() < k) {
					dist_q[adj_node].emplace(u.first + w[u.second][adj_node]);

					pq.emplace(u.first + w[u.second][adj_node], adj_node);
				}
				else if (dist_q[adj_node].top() > u.first + w[u.second][adj_node]) {
					dist_q[adj_node].pop();

					dist_q[adj_node].emplace(u.first + w[u.second][adj_node]);

					pq.emplace(u.first + w[u.second][adj_node], adj_node);
				}
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		if (dist_q[i].size() == k) {
			cout << dist_q[i].top() << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
	return 0;
}
