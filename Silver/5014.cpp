//BaekJoon_5014
//스타트링크


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 33.140%
*/

#include <iostream>
#include <queue>

int f, s, g, u, d;
int visited[1000001];
std::queue<std::pair<int, int>> q;

void Bfs(int a) {
	q.push(std::make_pair(a, 0));
	visited[a] = 1;

	while (!q.empty()) {
		int current_x = q.front().first;
		int count = q.front().second;
		q.pop();

		if (current_x == g) {
			std::cout << count;
			return;
		}

		int next_up = current_x + u;
		int next_down = current_x - d;

		if (next_up <= f && visited[next_up] == 0) {
			visited[next_up] = 1;
			q.push(std::make_pair(next_up, count + 1));
		}
		if (next_down >= 1 && visited[next_down] == 0) {
			visited[next_down] = 1;
			q.push(std::make_pair(next_down, count + 1));
		}
	}
	std::cout << "use the stairs";
	return;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> f >> s >> g >> u >> d;

	Bfs(s);
}
