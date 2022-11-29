//BaekJoon_1697
//숨바꼭질

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2384KB / 128MB
* 정답 비율 : 25.198%
*/

#include <iostream>
#include <queue>

int n, k;

bool visit[100001];

void Bfs(int a) {
	std::queue<std::pair<int, int>> q;

	q.push(std::make_pair(a, 0));

	while (!q.empty()) {
		int x = q.front().first;
		int cnt = q.front().second;

		q.pop();
		
		if (x == k) {
			std::cout << cnt;
			break;
		}
		if (0 <= x + 1 && x + 1 < 100001) {
			if (!visit[x + 1]) {
				visit[x + 1] = true;
				q.push(std::make_pair(x + 1, cnt + 1));
			}
		}
		if (0 <= x - 1 && x - 1 < 100001) {
			if (!visit[x - 1]) {
				visit[x - 1] = true;
				q.push(std::make_pair(x - 1, cnt + 1));
			}
		}
		if (0 <= 2 * x && 2 * x < 100001) {
			if (!visit[2 * x]) {
				visit[2 * x] = true;
				q.push(std::make_pair(2 * x, cnt + 1));
			}
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> k;

	visit[n] = true;

	Bfs(n);

	return 0;
}
