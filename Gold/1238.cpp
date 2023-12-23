//BaekJoon_1238
//파티

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2340KB / 128MB
* 정답 비율 : 48.384%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> v[2][1001];
int dist[2][1001];

void Dijkstra(int level, int start) {
	priority_queue<pair<int, int>, 
			vector<pair<int, int>>,
			greater<pair<int, int>>>pq;

	pq.emplace(0, start);
	dist[level][start] = 0;

	while (!pq.empty()) {
		int now_cost = pq.top().first;
		int now_v = pq.top().second;

		pq.pop();

		if (now_cost > dist[level][now_v]) {
			continue;
		}

		for (auto e : v[level][now_v]) {
			int next_cost = e.first;
			int next_v = e.second;

			if (dist[level][next_v] > now_cost + next_cost) {
				dist[level][next_v] = now_cost + next_cost;
				pq.emplace(dist[level][next_v], next_v);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, x;

	cin >> n >> m >> x;

	int start, end, t;
	for (int i = 0; i < m + 1; i++) {
		cin >> start >> end >> t;

		v[0][start].emplace_back(t, end);
		v[1][end].emplace_back(t, start);
	}

	for (int i = 0; i <= n; i++) {
		dist[0][i] = 987654321;
		dist[1][i] = 987654321;
	}



	Dijkstra(1, x);
	Dijkstra(0, x);

	int result = -1;

	for (int i = 1; i <= n; i++) {
		result = max(result, dist[0][i] + dist[1][i]);
	}
	cout << result;

	return 0;
}
