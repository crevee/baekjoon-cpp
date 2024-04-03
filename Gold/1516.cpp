//BaekJoon_1516
//게임 개발

/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 2420KB / 128MB
* 정답 비율 : 48.390%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	vector<vector<int>> v;
	vector<int> indegree;
	vector<int> build;

	v.resize(n + 1);
	indegree.resize(n + 1);
	build.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> build[i];

		while (true) {
			int tmp;

			cin >> tmp;

			if (tmp == -1) {
				break;
			}
			v[tmp].emplace_back(i);;
			indegree[i]++;
		}
	}
	queue<int> q;

	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0) {
			q.emplace(i);
		}
	}

	vector<int> result;
	result.resize(n + 1);

	while (!q.empty()) {
		int now = q.front();
		
		q.pop();

		for (int next : v[now]) {
			indegree[next]--;

			result[next] = max(result[next], result[now] + build[now]);

			if (indegree[next] == 0) {
				q.emplace(next);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << result[i] + build[i] << '\n';
	}
	return 0;
}
