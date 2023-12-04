//BaekJoon_5567
//결혼식


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2304KB / 128MB
* 정답 비율 : 44.092%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int result = 0;

vector<int> v[501];
int visited[501];

void BFS() {
	queue<int> q;

	q.emplace(1);
	visited[1] = 1;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int next : v[cur]) {
			if (visited[next] || visited[cur] >= 3) { //자신과 친구, 친구의 친구 최대거리 3
				continue;
			}
			q.emplace(next);
			visited[next] = visited[cur] + 1;
			result++;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}
	BFS();

	cout << result;

	return 0;
}
