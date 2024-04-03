//BaekJoon_1325
//효율적인 해킹

/*
* 제한 시간 : 3980ms / 5s
* 메모리 제한 : 3512KB / 256MB
* 정답 비율 : 19.123%
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> v;
vector<int> result;
vector<bool> visited;

void BFS(int index) {
	queue<int> q;
	
	q.emplace(index);

	visited[index] = true;

	while (!q.empty()) {
		int now_node = q.front();
		q.pop();

		for (int i : v[now_node]) {
			if (visited[i] == false) {
				visited[i] = true;

				result[i]++;
				q.emplace(i);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	v.resize(n + 1);
	result.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int s, e;

		cin >> s >> e;

		v[s].emplace_back(e);
	}

	visited.resize(n + 1);

	for (int i = 0; i <= n; i++) {
		fill(visited.begin(), visited.end(), false);
		BFS(i);
	}
	
	int max_value = 0;

	for (int i = 1; i <= n; i++) {
		max_value = max(max_value, result[i]);
	}

	for (int i = 1; i <= n; i++) {
		if (result[i] == max_value) {
			cout << i << ' ';
		}
	}
	return 0;
}
