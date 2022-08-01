//BaekJoon_1010.cpp
//다리 놓기

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.353%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
  
	int n, m, t;

	std::cin >> t;

	while (t--) {
		std::cin >> n >> m;

		long long ans = 1;

		int r = 1;
		
		for (int i = m; i > m - n; i--)
		{
			ans *= i;
			ans /= r++;
		}

		std::cout << ans << '\n';

	}

	return 0;

}
