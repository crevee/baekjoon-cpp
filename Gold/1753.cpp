//BaekJoon_1753
//리모컨

/*
* 제한 시간 : 128ms / 1s
* 메모리 제한 : 9184KB / 256MB
* 정답 비율 : 24.948%
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<pair<int, int>> node[20005];
priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int value[20005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, e, k;
	int u, v, w;

	cin >> n >> e >> k;

	for (int i = 0; i < e; i++) {
		cin >> u >> v >> w;
		node[u].push_back(make_pair(v, w));
	}

	for (int i = 1; i <= n; i++) {
		value[i] = 987654321;
	}
	value[k] = 0;

	pq.push(make_pair(0, k));

	while (!pq.empty()) {
		int x = pq.top().first;
		int u = pq.top().second;

		pq.pop();

		for (int i = 0; i < node[u].size(); i++) {
			int v = node[u][i].first;
			int w = node[u][i].second;

			if (x + w < value[v]) {
				value[v] = x + w;
				pq.push(make_pair(x + w, v));
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (value[i] == 987654321) {
			cout << "INF" << "\n";
		}
		else {
			cout << value[i] << "\n";
		}
	}
}
