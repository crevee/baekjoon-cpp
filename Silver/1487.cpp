//BaekJoon_1487
//물건 팔기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 42.230%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	long long n, max = 0, idx = 0;

	std::vector<std::pair<int, int>> v;

	std::cin >> n;

	int arr[51]{};

	for (int i = 0; i < n; i++) {
		int a, b;

		std::cin >> a >> b;

		v.push_back(std::make_pair(a, b));
	}

	std::sort(v.begin(), v.end());

	int maxp = 0;
	int tmaxp = 0;

	for (int i = 0; i < n; i++) {
		int total = 0;

		for (int j = i; j < n; j++) {
			int won = v[i].first - v[j].second;

			if (won > 0) {
				total += won;
			}
		}
		if (tmaxp < total) {
			tmaxp = total;
			maxp = v[i].first;
		}
	}
	std::cout << maxp;
}
