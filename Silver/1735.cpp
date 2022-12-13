//BaekJoon_1735
//분수 합


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.046%
*/

#include <iostream>

int a, b, c, d;

int Gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> a >> b >> c >> d;

	int e, f;
	e = (a * d + b * c);
	f = b * d;

	std::cout << e / Gcd(e, f) << ' ' << f / Gcd(e, f);
}
