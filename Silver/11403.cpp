//BaekJoon_11403
//경로 찾기


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2156KB / 256MB
* 정답 비율 : 58.731%
*/

#include <iostream>
#include <vector>
#include<cstring>

std::vector<int> v[100];

int visit[100];

void Dfs(int x) {
	for (int i = 0; i < v[x].size(); i++) {
		if (visit[v[x][i]] != 1) {
			visit[v[x][i]] = 1;
			Dfs(v[x][i]);
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, a;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> a;

			if (a == 1) {
				v[i].push_back(j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		memset(visit, 0, sizeof(visit));

		Dfs(i);
			

		for (int j = 0; j < n; j++) {
			std::cout << visit[j] << " ";
		}
		std::cout << '\n';
	}
}
