//BaekJoon_9375
//패션왕 신해빈


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 54.763%
*/

#include <iostream>
#include <string>
#include <map>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int t, n;
	std::string name, sort;

	std::cin >> t;

	while (t--) {
		std::cin >> n;

		std::map<std::string, int> m;

		while (n--) {
			std::cin >> name >> sort;

			if (m.find(sort) == m.end()) {
				m.insert({ sort, 1 });
			}
			else {
				m[sort]++;
			}
		}

		int answer = 1;

		for (auto i : m) {
			answer *= (i.second + 1);
		}
		answer--;
		std::cout << answer << '\n';
	}
}
