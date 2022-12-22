//BaekJoon_1769
//쉬운 계단 수

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 3680KB / 128MB
* 정답 비율 : 30.305%
*/

#include <iostream>
#include <string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string s;

	std::cin >> s;

	int count = 0;

	while (s.size() > 1) {
		int sum = 0;

		for (int i = 0; i < s.size(); i++) {
			sum += s[i] - '0';
		}
		s = std::to_string(sum);
		count++;
	}
	std::cout << count << '\n';

	if (std::stoi(s) % 3 == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
