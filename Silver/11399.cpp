//BaekJoon_11399
//ATM


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 67.251%
*/

#include <iostream>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, sum = 0, tmp = 0;
	int* p;

	std::cin >> n;

	p = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> p[i];
	}

	std::sort(p, p + n);

	for (int i = 0; i < n; i++)
	{
		tmp += p[i];
		sum += tmp;
	}
	std::cout << sum;
}
