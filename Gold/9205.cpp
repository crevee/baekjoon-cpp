//BaekJoon_9205
//맥주 마시면서 걸어가기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 39.577%
*/

#include<iostream>
#include<queue>

int n;
std::pair<int, int>store[100];
std::pair<int, int>festival;
std::pair<int ,int>home;
bool visited[100];

int Abs(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

bool Bfs(int n) {
	std::queue<std::pair<int, int>> q;
	q.push({ home.first, home.second });

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		if (abs(festival.first - x) + abs(festival.second - y) <= 1000) {
			return true;
		}

		for (int i = 0; i < n; i++) {
			if (visited[i] == 1) {
				continue;
			}
			if (abs(store[i].first - x) + abs(store[i].second - y) <= 1000) {
				visited[i] = 1;
				q.push({ store[i].first, store[i].second });
			}
		}
	}
	return false;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;

		std::cin >> home.first >> home.second;

		for (int i = 0; i < n; i++) {
			std::cin >> store[i].first >> store[i].second;

		}
		std::cin >> festival.first >> festival.second;

		bool possible = Bfs(n);
		if (possible) {
			std::cout << "happy\n";
		}
		else {
			std::cout << "sad\n";
		}
		std::fill(visited, visited + 100, false);
	}
}
