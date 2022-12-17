//BaekJoon_20170
//Commemorative Dice

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 79.245%
*/

#include <iostream>
#include <algorithm>

int Gcd(int a, int b) {
	int mod = a % b;

	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a[6], b[6], result = 0;

	for (int i = 0; i < 6; i++) {
		std::cin >> a[i];
	}

	for (int i = 0; i < 6; i++) {
		std::cin >> b[i];
	}

	std::sort(a, a + 6);
	std::sort(b, b + 6);

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (a[i] > b[j]) {
				result++;
			}
		}
	}
	std::cout << result /Gcd(result, 36) << '/' << 36 / Gcd(result, 36);
}
