//BaekJoon_1916
//최소비용 구하기

/*
* 제한 시간 : 40ms / 0.5s
* 메모리 제한 : 4744KB / 128MB
* 정답 비율 : 32.110%
*/

#include <iostream>
#include <vector>
#include <queue>

int n, m;
int start, destination;
int distance[1001];

std::vector<std::pair<int, int>> bus[1001];

void Dijkstra() {
	std::priority_queue<std::pair<int, int>> pq;
	
	pq.push(std::make_pair(0, start));

	distance[start] = 0;

	while (!pq.empty()) {
		int cost = -pq.top().first;
		int current = pq.top().second;

		pq.pop();
		
		if (distance[current] < cost) {
			continue;
		}

		for (int i = 0; i < bus[current].size(); i++) {
			int next = bus[current][i].first;
			int next_cost = cost + bus[current][i].second;

			if (distance[next] > next_cost) {
				distance[next] = next_cost;
				pq.push(std::make_pair(-next_cost, next));
			}
		}
	}
	std::cout << distance[destination];
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b, c;

		std::cin >> a >> b >> c;
		bus[a].push_back(std::make_pair(b, c));
	}
	std::cin >> start >> destination;

	for (int i = 1; i <= n; i++) {
		distance[i] = 987665321;
	}

	Dijkstra();

	return 0;
}
