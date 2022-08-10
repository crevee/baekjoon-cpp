//BaekJoon_2675
//오늘 날짜

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 50.720%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int t, r;
	std::string s;


	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> r >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				std::cout << s[j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
