//BaekJoon_24479
//알고리즘 수업 - 깊이 우선 탐색 1


/*
* 제한 시간 : 108ms / 1s
* 메모리 제한 : 32416KB / 512MB
* 정답 비율 : 23.340%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[1000001];

int visited[100001];
int result[100001];
int cnt;

void DFS(int r) {
	if (visited[r] == 1) {
		return;
	}

	visited[r] = 1;
	cnt++;
	result[r] = cnt;

	for (size_t i = 0; i < v[r].size(); i++) {
		DFS(v[r][i]);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, r;

	cin >> n >> m >> r;

	for (int i = 1; i <= m; i++) {
		int a, b;

		cin >> a >> b;

		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end());
	}

	DFS(r);

	for (int i = 1; i <= n; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}
