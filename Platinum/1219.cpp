//BaekJoon_1219
//오민식의 고민

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 17.933%
*/

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<long> min_distance, city_money;
vector<tuple<int, int, int>> edges;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, start_city, end_city;

	cin >> n >> start_city >> end_city >> m;

	min_distance.resize(n);
	city_money.resize(n);

	fill(min_distance.begin(), min_distance.end(), -987654321);

	for (int i = 0; i < m; i++) {
		int s, e, price;

		cin >> s >> e >> price;

		edges.emplace_back(s, e, price);
	}

	for (int i = 0; i < n; i++) {
		cin >> city_money[i];
	}

	min_distance[start_city] = city_money[start_city];

	for (int i = 0; i <= n + 50; i++) {
		for (int j = 0; j < m; j++) {
			int start = get<0>(edges[j]);
			int end = get<1>(edges[j]);
			int price = get<2>(edges[j]);

			if (min_distance[start] == -987654321) {
				continue;
			}
			else if (min_distance[start] == 987654321) {
				min_distance[end] = 987654321;
			}
			else if (min_distance[end] <
				min_distance[start] + city_money[end] - price) {
				
				min_distance[end] =
				min_distance[start] + city_money[end] - price;

				if (i >= n - 1) {
					min_distance[end] = 987654321;
				}
			}
		}
	}

	if (min_distance[end_city] == -987654321) {
		cout << "gg" << '\n';
	}
	else if (min_distance[end_city] == 987654321) {
		cout << "Gee" << '\n';
	}
	else {
		cout << min_distance[end_city] << '\n';
	}
	return 0;
}
