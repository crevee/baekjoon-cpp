//BaekJoon_2606
//바이러스

/*
* 제한 시간 : 0ms / 0.1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 46.177%
*/

#include <iostream>
#include <vector>


std::vector <int> a[101];

bool check[101];

int cnt = 0;

void Dfs(int x) {
	check[x] = true;

	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];

		if (!check[y]) {
			Dfs(y);
			cnt++;
		}
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m;

	std::cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;

		std::cin >> u >> v;

		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	Dfs(1);

	std::cout << cnt << '\n';

	return 0;
}
