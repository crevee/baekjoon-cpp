//BaekJoon_2512
//예산


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2160KB / 128MB
* 정답 비율 : 34.081%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n,m;
	std::vector <int> budget;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;

		budget.push_back(x);
	}

	std::cin >> m;

	std::sort(budget.begin(), budget.end());

	int start = 0;
	int end = budget[n - 1];
	int result = 0, sum;

	while (start <= end) {
		sum = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++) {
			sum += std::min(budget[i], mid);
		}

		if (m >= sum) {
			result = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	std::cout << result;
}
	
