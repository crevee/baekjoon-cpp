//BaekJoon_11279
//최대 힙


/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2916KB / 256MB
* 정답 비율 : 46.492%
*/

#include <iostream>
#include <vector>
#include <queue>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::vector<int> result;

	int n, x;

	std::cin >> n;

	std::priority_queue<int> q;

	for (int i = 0; i < n; i++) {
		std::cin >> x;

		if (x != 0) {
			q.push(x);
		}
		else {
			if (q.empty()) {
				result.push_back(0);
			}
			else {
				result.push_back(q.top());
				q.pop();
			}

		}
	}

	for (int i = 0; i < result.size(); i++) {
		std::cout << result[i] << '\n';
	}
}
