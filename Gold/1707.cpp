//BaekJoon_1707
//이분 그래프

/*
* 제한 시간 : 256ms / 2s
* 메모리 제한 : 17860KB / 256MB
* 정답 비율 : 24.209%
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> vec[20001];
int visited[20001];
int V, E;

void DFS(int start) {
	if (!visited[start]) {
		visited[start] = 2;
	}

	for (size_t i = 0; i < vec[start].size(); i++) {
		int idx = vec[start][i];

		if (!visited[idx]) {
			if (visited[start] == 2) {
				visited[idx] = 3;
			}
			else if (visited[start] == 3) {
				visited[idx] = 2;
			}

			DFS(idx);
		}
	}
}

int Check() {
	for (int i = 1; i <= V; i++) {
		for (size_t j = 0; j < vec[i].size(); j++) {
			int idx = vec[i][j];

			if (visited[i] == visited[idx]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int K, u, v;

	cin >> K;

	for (int t = 0; t < K; t++) {
		cin >> V >> E;
		for (int i = 0; i < E; i++) {
			cin >> u >> v;
			vec[u].emplace_back(v);
			vec[v].emplace_back(u);
		}

		for (int i = 1; i <= V; i++) {
			if (!visited[i]) {
				DFS(i);
			}
		}

		if (!Check()) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}

		memset(visited, 0, sizeof(visited));
		memset(vec, 0, sizeof(vec));
	}
	return 0;
}
