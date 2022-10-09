//BaekJoon_1620
//나는야 포켓몬 마스터 이다솜


/*
* 제한 시간 : 224ms / 2s
* 메모리 제한 : 7828KB / 256MB
* 정답 비율 : 33.839%
*/

#include <iostream>
#include <map>
#include <vector>
#include <string>

std::vector<std::string> poketmon_name;
std::map<std::string, int> map_poketmon;

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m;

	std::string tmp;
	std::vector<std::string> result;

	std::cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		
		std::cin >> tmp;
		poketmon_name.push_back(tmp);

		map_poketmon.insert(std::make_pair(tmp, i));
	}

	for (int j = 0; j < m; j++) {
		std::cin >> tmp;

		if (tmp[0] >= 65 && tmp[0] <= 90) {
			result.push_back(std::to_string(map_poketmon[tmp]));
		}
		else {
			result.push_back(poketmon_name[std::stoi(tmp) - 1]);
		}

	}

	for (int i = 0; i < result.size(); i++) {
		std::cout << result[i] << '\n';
	}
	return 0;
}
