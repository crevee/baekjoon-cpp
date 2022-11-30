//BaekJoon_2493
//탑

/*
* 제한 시간 : 108ms / 1.5s
* 메모리 제한 : 6300KB / 128MB
* 정답 비율 : 30.729%
*/

#include <iostream>
#include <stack>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::stack<std::pair<int, int>> s;

	int num, height;

	std::cin >> num;

	for (int i = 0; i < num; i++) {
		std::cin >> height;

		while (!s.empty()) {
			if (height < s.top().second) {
				std::cout << s.top().first << " ";
				break;
			}
			s.pop();
		}
		if (s.empty()) {
			std::cout << 0 << " ";
		}
		s.push(std::make_pair(i + 1, height));
	}
	return 0;
}
