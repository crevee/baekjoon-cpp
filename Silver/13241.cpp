//BaekJoon_13241
//최소공배수


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 64.075%
*/

#include <iostream>

long long Gcd(long long a, long long b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	long long a, b;

	std::cin >> a >> b;

	std::cout << (a * b) /Gcd(a, b);
}
