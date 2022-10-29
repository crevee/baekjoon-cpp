//BaekJoon_11652
//

/*
* 제한 시간 : 28ms / 1s
* 메모리 제한 : 2804KB / 256MB
* 정답 비율 : 28.781%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;

	int count = 0;
	int max = 0;

	std::vector<long long> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	long long result = v[0];

	for (int i = 1; i < n; i++) {
		if (v[i] == v[i - 1]) {
			count++;
			if (max < count) {
				max = count;
				result = v[i];
			}
		}
		else {
			count = 0;
		}
	}

	std::cout << result;

	return 0;
}
