//BaekJoon_1755
//숫자놀이


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2164KB / 128MB
* 정답 비율 : 64.412%
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int m, n;
	
	std::string s;
	std::string nums[11] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	std::vector<std::pair<std::string, int>> answer;

	std::cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (i >= 10) {
			s = nums[i / 10] + ' ' + nums[i % 10];
			answer.push_back({ s, i });
		}
		else {
			s = nums[i % 10];
			answer.push_back({ s, i });
		}
	}

	std::sort(answer.begin(), answer.end());

	for (int i = 0; i < answer.size(); i++) {
		std::cout << answer[i].second << ' ';

		if (i % 10 == 9) {
			std::cout << '\n';
		}
	}
}
