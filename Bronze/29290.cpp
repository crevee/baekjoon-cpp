//BaekJoon_2920
//음계

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 55.346%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	std::string n, m;

	for (int i = 0; i < 8; i++)
	{
		std::cin >> n;
		m += n;
	}


	if (m == "12345678")
	{
		std::cout << "ascending";
	}
	else if (m == "87654321")
	{
		std::cout << "descending";
	}
	else
	{
		std::cout << "mixed";
	}
	return 0;
}
