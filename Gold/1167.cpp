//BaekJoon_1167
//트리의 지름

/*
* 제한 시간 : 76ms / 2s
* 메모리 제한 : 8644KB / 256MB
* 정답 비율 : 33.774%
*/

#include<iostream>
#include<cstring>
#include<vector>

int v;
std::vector<std::pair<int, int>> graph[100001];
bool visited[100001];
int diameter, furthest_node;

void Dfs(int node, int cost) {
	if (visited[node]) {
		return;
	}
	visited[node] = true;

	if (diameter < cost) {
		diameter = cost;
		furthest_node = node;
	}

	for (int i = 0; i < graph[node].size(); i++) {
		Dfs(graph[node][i].first, cost + graph[node][i].second);
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> v;

	for (int i = 0; i < v; i++) {
		int node;

		std::cin >> node;

		while (true) {
			int node2, cost;

			std::cin >> node2;

			if (node2 == -1) {
				break;
			}

			std::cin >> cost;

			graph[node].push_back(std::make_pair(node2, cost));
		}
	}

	std::memset(visited, false, sizeof(visited));
	Dfs(1, 0);

	std::memset(visited, false, sizeof(visited));
	diameter = 0;
	Dfs(furthest_node, 0);

	std::cout << diameter;
}
