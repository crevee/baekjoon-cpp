//BaekJoon_1948
//임계경로

/*
* 제한 시간 : 28ms / 2s
* 메모리 제한 : 5176KB / 512MB
* 정답 비율 : 31.315%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector < vector<pair<int, int>>> vec;
	vector < vector<pair<int, int>>> reverse_vec;
	vector<int> indegree;

	vec.resize(n + 1);
	reverse_vec.resize(n + 1);
	indegree.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int s, e, v;

		cin >> s >> e >> v;

		vec[s].emplace_back(make_pair(e, v));
		reverse_vec[e].emplace_back(make_pair(s, v));

		indegree[e]++;
	}

	int start_map, end_map;

	cin >> start_map >> end_map;

	queue<int> q;

	q.emplace(start_map);

	vector<int> result;

	result.resize(n + 1);

	while (!q.empty()) {
		int now = q.front();
		q.pop();

		for (pair<int, int> next : vec[now]) {
			indegree[next.first]--;
			result[next.first] = max(result[next.first], result[now] + next.second);

			if (indegree[next.first] == 0) {
				q.emplace(next.first);
			}
		}
	}

	int result_cnt = 0;
	
	vector<bool> visited(n +1);
	
	queue<int> reverse_q;

	reverse_q.emplace(end_map);
	visited[end_map] = true;

	while (!reverse_q.empty()) {
		int now = reverse_q.front();

		reverse_q.pop();

		for (pair<int, int > next : reverse_vec[now]) {
			if (result[next.first] + next.second == result[now]) {
				result_cnt++;

				if (visited[next.first] == false) {
					visited[next.first] = true;

					reverse_q.emplace(next.first);
				}
			}
		}
	}

	cout << result[end_map] << '\n' << result_cnt << '\n';

	return 0;
}
