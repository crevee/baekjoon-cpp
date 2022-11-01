//BaekJoon_1149
//RGB거리

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 52.211%
*/

#include <iostream>
#include <algorithm>

int house[1001][3]{};
int cost[3];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		std::cin >> cost[0] >> cost[1] >> cost[2];

		house[i][0] = std::min(house[i - 1][1], house[i - 1][2]) + cost[0];
		house[i][1] = std::min(house[i - 1][0], house[i - 1][2]) + cost[1];
		house[i][2] = std::min(house[i - 1][0], house[i - 1][1]) + cost[2];
	}

	std::cout << std::min(house[n][0], std::min(house[n][1], house[n][2]));

	return 0;
}
