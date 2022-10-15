//BaekJoon_1373
//2진수 8진수

/*
* 제한 시간 : 56ms / 1s
* 메모리 제한 : 4916KB / 128MB
* 정답 비율 : 40.676%
*/

#include <iostream>
#include <string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string binaray;

	std::cin >> binaray;

	std::string result;

	int len = binaray.length();

	int i = 0;

	if (len % 3 == 1) {
		std::cout << binaray[0];
		i = 0;
	}
	else if (len % 3 == 2) {
		std::cout << ((binaray[0] - '0') * 2) + (binaray[1] - '0');
		i = 2;
	}

	for (i; i < len; i += 3) {
		std::cout << ((binaray[i] - '0') * 4) + ((binaray[i + 1] - '0') * 2)
			+ (binaray[i + 2] - '0');
	}

	std::cout << '\n';

	return 0;
}
