//BaekJoon_11724
//연결 요소의 개수

/*
* 제한 시간 : 72ms / 3s
* 메모리 제한 : 3000KB / 512MB
* 정답 비율 : 42.624%
*/

#include <iostream>

int n, m, u, v, result = 0;
bool map[1001][1001]{};
bool check[1001]{};

void Dfs(int num) {
	check[num] = true;

	for (int i = 1; i <= n; i++) {
		if (map[num][i] == true && check[i] == false) {
			Dfs(i);
		}
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> m;

	for (int i = 0; i < m; i++) {
		std::cin >> u >> v;

		map[u][v] = true;
		map[v][u] = true;
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			result++;

			Dfs(i);
		}
	}
	std::cout << result << std::endl;
}
