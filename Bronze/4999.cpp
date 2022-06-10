//BaekJoon_4999
//아!

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 64.010%
*/

#include <iostream>
#include <string>

int main() {

	std::string ah_1, ah_2;

	std::cin >> ah_1 >> ah_2;
	
	if (size(ah_1) >= size(ah_2))
		std::cout << "go";
	else
		std::cout << "no";

	return 0;
}
