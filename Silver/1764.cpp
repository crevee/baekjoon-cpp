//BaekJoon_1764
//듣보잡

/*
* 제한 시간 : 56ms / 2s
* 메모리 제한 : 12996KB / 256MB
* 정답 비율 : 40.299%
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m, cnt = 0;

	std::string name;
	std::vector<std::string> result;
	std::map<std::string, bool> list;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		std::cin >> name;
		list.insert(make_pair(name, true));
	}

	for (int i = 0; i < m; i++) {
		std::cin >> name;

		if (list[name] == true) {
			result.push_back(name);
			cnt++;
		}
	}

	std::cout << cnt << '\n';

	std::sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++) {
		std::cout << result[i] << '\n';
	}

	return 0;
}
