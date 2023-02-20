//BaekJoon_1946
//신입 사원


/*
* 제한 시간 : 516ms / 2s
* 메모리 제한 : 2800KB / 256MB
* 정답 비율 : 32.057%
*/

#include<iostream>
#include<algorithm>

std::pair<int, int> employee[100000];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, n;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		
		std::cin >> n;

		for (int j = 0; j < n; j++) {
			std::cin >> employee[j].first >> employee[j].second;
		}

		std::sort(employee, employee + n);

		int result = 1;
		int rank = employee[0].second;

		for (int j = 1; j < n; j++) {
			if (employee[j].second < rank) {
				result++;
				rank = employee[j].second;
			}
		}
		std::cout << result << '\n';
	}
}
