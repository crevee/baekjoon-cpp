//BaekJoon_1357
//뒤집힌 덧셈

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 50.052%
*/

#include <iostream>
#include <algorithm>
#include <string>


int Rev(std::string str) {
	std::reverse(str.begin(), str.end());

	int result = std::stoi(str);

	return result;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string a, b;

	std::cin >> a >> b;

	int reverse_num = Rev(a) + Rev(b);

	std::cout << Rev(std::to_string(reverse_num));

	return 0;
}
