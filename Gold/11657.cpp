//BaekJoon_11657
//타임머신
/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2336KB / 256MB
* 정답 비율 : 25.007%
*/

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<long> min_distance;
vector<tuple<int, int, int>> edges;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	min_distance.resize(n + 1);

	fill(min_distance.begin(), min_distance.end(), 987654321);

	for (int i = 0; i < m; i++) {
		int s, e, t;

		cin >> s >> e >> t;

		edges.emplace_back(s, e, t);
	}

	min_distance[1] = 0;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tuple<int, int, int> min_edge = edges[j];

			int start = get<0>(min_edge);
			int end = get<1>(min_edge);
			int time = get<2>(min_edge);

			if (min_distance[start] != 987654321 &&
				min_distance[end] > min_distance[start] + time) {
				min_distance[end] = min_distance[start] + time;
			}
		}
	}

	bool check_cycle = false;

	for (int i = 0; i < m; i++) {
		tuple<int, int, int> min_edge = edges[i];

		int start = get<0>(min_edge);
		int end = get<1>(min_edge);
		int time = get<2>(min_edge);

		if (min_distance[start] != 987654321 &&
			min_distance[end] > min_distance[start] + time) {
			check_cycle = true;
		}
	}

	if (!check_cycle) {
		for (int i = 2; i <= n; i++) {
			if (min_distance[i] == 987654321) {
				cout << -1 << '\n';
			}
			else {
				cout << min_distance[i] << '\n';
			}
		}
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}
