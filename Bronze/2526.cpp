//BaekJoon_2526
//싸이클

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 40.472%
*/

#include <iostream>
#include <vector>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, p, ne, cnt = 1;

	std::cin >> n >> p;

	ne = n;
	std::vector <int> nums(1001);

	while (!nums[ne])
	{
		nums[ne] = cnt++;

		ne = ne * n % p;
	}

	std::cout << cnt - nums[ne] << '\n';


	return 0;
}
