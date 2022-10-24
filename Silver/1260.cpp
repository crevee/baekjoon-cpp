//BaekJoon_1260
//DFS와 BFS

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2320KB / 128MB
* 정답 비율 : 35.865%
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::vector<int> vec[1000];
std::queue<int> q;

int result_dfs[1001], result_bfs[1001];

void Dfs(int v) {
	std::cout << v << " ";

	for (int i = 0; i < vec[v].size(); i++) {
		if (result_dfs[vec[v][i]] != 1) {
			result_dfs[vec[v][i]] = 1;
			Dfs(vec[v][i]);
		}
	}
}

void Bfs() {
	while (q.empty() != 1) {
		int v = q.front();
		
		q.pop();

		std::cout << v << " ";

		for (int i = 0; i < vec[v].size(); i++) {
			if (result_bfs[vec[v][i]] != 1) {
				result_bfs[vec[v][i]] = 1;
				q.push(vec[v][i]);
			}
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m, v, a, b;

	std::cin >> n >> m >> v;

	while (m--) {
		std::cin >> a >> b;

		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	result_dfs[v] = result_bfs[v] = 1;

	q.push(v);

	for (int i = 1; i <= n; i++) {
		std::sort(vec[i].begin(), vec[i].end());
	}

	Dfs(v);

	std::cout << '\n';

	Bfs();

	return 0;
}
