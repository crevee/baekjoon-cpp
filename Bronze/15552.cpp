//BaekJoon_15552
//

/*
* 제한 시간 : 216ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 45.750%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int T = 0, A = 0, B = 0;;

	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> A >> B;
		std::cout << A + B << "\n";
	}

	return 0;
}
