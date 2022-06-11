//BaekJoon_9086
//문자열

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 79.109%
*/

#include <iostream>

int main() {

	int T = 0;
	std::string alphabet;


	std::cin >> T;

	while (T--) {
		std::cin >> alphabet;
		int end = alphabet.size();

		std::cout << alphabet[0] << alphabet[end - 1] << '\n';
	}
	return 0;
}
