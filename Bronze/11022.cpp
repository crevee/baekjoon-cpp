//BaekJoon_11022
//A+B - 8

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 69.291%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int a = 0, b = 0, t = 0;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
	}

	return 0;

}
