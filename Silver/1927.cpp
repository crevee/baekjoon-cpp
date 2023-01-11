//BaekJoon_1927
//최소 힙

/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2916KB / 128MB
* 정답 비율 : 48.750%
*/

#include <iostream>
#include <queue>
#include <vector>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::priority_queue<int, std::vector<int>, std::greater<int>> p_queue;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;

		std::cin >> tmp;

		if (tmp == 0) {
			if (p_queue.empty()) {
				std::cout << 0 << '\n';
			}
			else {
				std::cout << p_queue.top() << '\n';
				p_queue.pop();
			}
		}
		else {
			p_queue.push(tmp);
		}
	}
	return 0;
}
