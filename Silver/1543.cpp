//BaekJoon_1543
//문서 검색

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 42.224%
*/

#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string str, token;

	std::getline(std::cin, str), std::getline(std::cin, token);

	int cnt = 0; int start = 0;

	while (str.find(token) != std::string::npos) {
		int first_pos = str.find(token);
		cnt++;
		str = str.substr(first_pos + token.length(), str.length());
	}
	std::cout << cnt << '\n';

	return 0;
}
