//BaekJoon_18352
//특정 거리의 도시 찾기


/*
* 제한 시간 : 396ms / 2s
* 메모리 제한 : 20436KB / 256MB
* 정답 비율 : 30.372%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[300001];
bool visited[300001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k, x, height = 0;
	queue<int> q;

	vector<int> result;

	cin >> n >> m >> k >> x;

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		v[a].emplace_back(b);
	}

	q.push(x);
	visited[x] = 1;

	while (!q.empty()) {
		int q_size = q.size();

		while (q_size--) {
			int cur = q.front();
			q.pop();

			if (height == k) {
				result.emplace_back(cur);
			}
			for (int next : v[cur]) {
				if (visited[next] == 0) {
					visited[next] = 1;
					q.emplace(next);
				}
			}
		}
		height++;

		if (height > k) {
			break;
		}
	}

	if (result.empty()) {
		cout << -1;

		return 0;
	}
	sort(result.begin(), result.end());

	for (int node : result) {
		cout << node << '\n';
	}
	return 0;
}
