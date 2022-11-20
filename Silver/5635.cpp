//BaekJoon_5635
//생일

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 70.251%
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	std::vector < std::pair<std::pair<int, int>, std::pair<int, std::string>>> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i].second.second >> v[i].second.first 
			     >> v[i].first.second >> v[i].first.first;
	}

	std::sort(v.begin(), v.end());

	std::cout << v[n - 1].second.second << '\n' << v[0].second.second << '\n';

	return 0;
}
