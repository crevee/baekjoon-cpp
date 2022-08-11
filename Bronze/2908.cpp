//BaekJoon_2908
//상수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 69.920%
*/

#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string a, b;

	std::cin >> a >> b;

	std::reverse(a.begin(), a.end());
	std::reverse(b.begin(), b.end());

	a > b ? std::cout << a : std::cout << b;

	return 0;
}
