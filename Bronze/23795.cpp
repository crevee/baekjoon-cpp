//BaekJoon_23759
//사장님 도박은 재미로 하셔야 합니다

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 79.777%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n =0, sum = 0;

	while (n != -1) {
		std::cin >> n;
		sum += n;
	}
	std::cout << sum + 1;
}
