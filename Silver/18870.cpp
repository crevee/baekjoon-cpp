//BaekJoon_18870
//좌표 압축

/*
* 제한 시간 : 468ms / 2s
* 메모리 제한 : 9840KB / 512MB
* 정답 비율 : 40.134%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;

	std::cin >> n;

	std::vector<int> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	std::vector<int> copy_v(v);
	std::sort(copy_v.begin(), copy_v.end());

	copy_v.erase(std::unique(copy_v.begin(), copy_v.end()), copy_v.end());

	for (int i = 0; i < n; i++) {
		std::vector<int>::iterator iterator = std::lower_bound(copy_v.begin(), copy_v.end(), v[i]);

		std::cout << iterator - copy_v.begin() << ' ';
	}

	return 0;
}
