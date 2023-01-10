//BaekJoon_15649
//N과 M(1)


/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 61.921%
*/

#include <iostream>

int n, m;
int arr[9]{};
bool visited[9]{};

void Dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			std::cout << arr[i] << ' ';
		}
		std::cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (visited[i] != true) {
			visited[i] = true;
			arr[cnt] = i;
			Dfs(cnt + 1);
			visited[i] = false;
		}
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> m;

	Dfs(0);
}
