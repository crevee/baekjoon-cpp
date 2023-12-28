//BaekJoon_1865
//웜홀

/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 2332KB / 128MB
* 정답 비율 : 21.595%
*/

#include <iostream>
#include <vector>

using namespace std;

int n, m, w;

vector<pair<pair<int, int>, int>> edges;

bool BellmanFord(int& n) {
	vector<int> dist(n + 1, 987654321);

	dist[1] = 0;

	for (int i = 0; i < n; i++) {
		for (int pos = 0; pos < edges.size(); pos++) {
			int s = edges[pos].first.first;
			int e = edges[pos].first.second;
			int t = edges[pos].second;

			if (dist[s] + t < dist[e]) {
				dist[e] = dist[s] + t;
			}
		}
	}

	for (int pos = 0; pos < edges.size(); pos++) {
		int s = edges[pos].first.first;
		int e = edges[pos].first.second;
		int t = edges[pos].second;

		if (dist[e] > dist[s] + t) {
			return true;
		}
	}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		edges.clear();
		
		cin >> n >> m >> w;

		for (int j = 0; j < m; j++) {
			int s, e, t;
			cin >> s >> e >> t;
			edges.emplace_back(pair(s, e), t);
			edges.emplace_back(pair(e, s), t);
		}

		for (int j = 0; j < w; j++) {
			int s, e, t;

			cin >> s >> e >> t;

			edges.emplace_back(pair(s, e), -t);
		}

		if (BellmanFord(n)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
